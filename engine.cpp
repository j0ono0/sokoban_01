#include "engine.h"

Extended_Tft screen = Extended_Tft(TFT_CS, TFT_DC);

/////////////////////////////////////////////
// Preconfigured entities per environment ///

const Entity envEntities_0[] = {
	{5,7,plr_t},
	{5,6,crate_t},
	{3,7,crate_t},
	{7,6,crate_t},
};
const Entity envEntities_1[] = {
	{7,7,plr_t},
	{8,7,crate_t},
};

// TODO: can these be combined?

const uint8_t *terrainList[] = {
    terrain_0,
    terrain_1
};

const Entity *envEntitiesList[] = {
    envEntities_0,
    envEntities_1
};
////////////////////////////////////////////

// Current environment
int envId = 0;

// Entities currently in game.
Entity currentEntities[MAX_ENTITIES];
int currentEntityLength = 0;

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////



int currentEntitiesLength(void)
{
    return 4;
    // return sizeof(envEntitiesList[envId]) / sizeof(envEntitiesList[envId][0]);
}

void populateCurrentEntities()
{
    currentEntityLength = 0;
    int len = 4;
    // size_t len = sizeof(envEntitiesList[envId]) / sizeof(envEntitiesList[envId][0]);
    for(int i = 0; i < len; ++i)
    {
        currentEntities[currentEntityLength] = envEntitiesList[envId][i];
        ++currentEntityLength;
    }
}

Entity *assignPlayer()
{
    for(int i = 0; i < currentEntityLength; ++i)
    {
        if(currentEntities[i].type == plr_t)
            return &currentEntities[i];
    }
    return NULL;
}

/////////////////////////////////////////////////////
// Env controls /////////////////////////////////////

int nextEnvironment()
{
    return setEnvironment(++envId);
}
int setEnvironment(int envIndex)
{
    // TODO: ensure index cannot be outside terrainList
    if(envIndex > 1)
        envIndex = 0;
    envId = envIndex;
    populateCurrentEntities();
    return envId;
}
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

void drawAllLocs()
{
     for(int y=0; y < GRID_HEIGHT; y++)
    {
        for(int x=0; x < GRID_WIDTH; x++)
        {
            drawLoc(x, y);
        }
    }
}

void drawLoc(int x, int y)
{
    uint16_t buf[GRID_SIZE * GRID_SIZE];
    tileToBuf(buf, (TileRef) tileAtLoc(x, y));

    if(Entity *e = entityAtLocation(x, y))
    {
        drawToBuff(buf, e->type, 0, 0);
    }

    // Draw in entity overlap
    if(Entity *e = entityAtLocation(x, y+1))
    {
        drawToBuff(buf, e->type, 0, 1);
    }

    screen.drawCellBuffer(buf, x, y);
}

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

int tileAtLoc(int x, int y)
{
    return terrainList[envId][y * GRID_WIDTH + x];
}

bool inbounds(int x, int y)
{
    if (x < 0 || y < 0 || x > GRID_WIDTH || y > GRID_HEIGHT)
    {
        return false;
    }
    return true;
}

void moveSprite(int dx, int dy, Entity *entity)
{
    entity->x += dx;
    entity->y += dy;
}

void updateCrate(Entity *crate)
{
    if(tileAtLoc(crate->x, crate->y) == floor_target_tr || tileAtLoc(crate->x, crate->y) == water_target_tr)
        crate->type = crate_active_t;
    else
        crate->type = crate_t;
}

bool gameSolved()
{
    // Test if every goal has a crate on the same location.
    for(int y = 0; y < GRID_HEIGHT; y++)
    {
        for(int x = 0; x < GRID_WIDTH; x++)
        {
            if(tileAtLoc(x, y) == floor_target_tr || tileAtLoc(x, y) == water_target_tr)
            {
                Entity *e = entityAtLocation(x, y);
                if(e == NULL || e->type != crate_active_t)
                    return false;
            }
        }
    }
    return true;
}


struct Entity *entityAtLocation(int x, int y)
{
    for(int i = 0; i < currentEntityLength; i++)
    {
        if(currentEntities[i].x == x && currentEntities[i].y == y)
            return &currentEntities[i];
    }
    return NULL;
}

bool terrainBlocksMovement(int x, int y)
{
    TileRef tile = (TileRef) tileAtLoc(x,y);
    EntityType et = tileToEntityType(tile);
    return typeBlocksMovement(et);
}

EntityType tileToEntityType(TileRef tile)
{
    switch(tile)
    {
		case missing_tr:
            return floor_t;
		case floor_tr:
            return floor_t;
        case stone_tr:
            return stone_t;
        case water_tr:
		    return water_t;

        // Features
		
        case stone_front_tr:
        case stone_w_tr:
        case stone_e_tr:
        case stone_nw_tr:
        case stone_ne_tr:
        case stone_sw_tr:
        case stone_se_tr:
            return stone_t;
		
        // Compound 
		
        case floor_stone_overhang_tr:
        case floor_target_tr:
           return  floor_t;
		
        case water_stone_overhang_tr:
        case water_target_tr:
		    return water_t;
    }
    return floor_t;
}

bool typeBlocksMovement(EntityType type)
{
    switch(type)
    {
        case stone_t:
        case stone_front_t:
        case stone_e_t:
        case stone_w_t:
        case bench_front_t:
        case bench_top_t:
        case crate_t:
        case crate_active_t:
        case plr_t:
        case wall_t:
            return true;

        case bench_overhang_t:
        case floor_t:
        case goal_t:
        case water_t:
            return false;

        default:
            return false;
    }
}

bool terrainOverlays(EntityType type)
{
    switch(type)
    {

        case stone_overhang_t:
        case bench_overhang_t:
            return true;

        case stone_t:
        case stone_front_t:
        case stone_e_t:
        case stone_w_t:

        case bench_front_t:
        case bench_top_t:
        case crate_t:
        case crate_active_t:
        case plr_t:
        case wall_t:
        case floor_t:
        case goal_t:
        case water_t:
            return false;
            
        default:
            return false;
    }
}

bool atLocation(Entity *entity, int x, int y)
{
    if (entity->x == x && entity->y == y)
    {
        return true;
    }
    return false;
}

bool coLocated(Entity *a, Entity *b)
{
    if (a->x == b->x && a->y == b->y)
    {
        return true;
    }
    return false;
}


void spriteToBuf(uint16_t *buf, int x, int y)
{
    int offset =  y * GRID_SIZE * SPRITESHEET_WIDTH + x * GRID_SIZE;
    const uint16_t *pixelPtr = &sprite_sheet_01[offset];
    for(int y = 0; y < GRID_SIZE; y++)
    {
        for(int x=0; x < GRID_SIZE; x++)
        {
            if(*pixelPtr != COLOR_TRANSPARENT)
                buf[y * GRID_SIZE + x] = *pixelPtr;
            ++pixelPtr;
        }
        pixelPtr += SPRITESHEET_WIDTH - GRID_SIZE ;
    }
}

void tileToBuf(uint16_t *buf, TileRef tile)
{
    EntityType type = floor_t;
    switch(tile)
    {
        case floor_tr:
            type = floor_t;
            break;
        case stone_tr:
            type = stone_t;
            break;
        // case water_tr:
        //     type = floor_t;
        //     break;
        // Features
        case stone_front_tr:
            type = stone_front_t;
            break;
        case stone_w_tr:
            type = stone_w_t;
            break;
        case stone_e_tr:
            type = stone_e_t;
            break;
        case stone_nw_tr:
            type = stone_nw_t;
            break;
        case stone_ne_tr:
            type = stone_ne_t;
            break;
        case stone_sw_tr:
            type = stone_sw_t;
            break;
        case stone_se_tr:
            type = stone_se_t;
            break;
        // Compound 
        case floor_stone_overhang_tr:
            drawToBuff(buf, floor_t, 0, 0);
            type = stone_overhang_t;
            break;
        case floor_target_tr:
            drawToBuff(buf, floor_t, 0, 0);
            type = goal_t;
            break;
        // case water_stone_overhang_tr:
        //     type = floor_t;
        //     break;
        // case water_target_tr:
        //     type = floor_t;
        //     break;
        default: 
            type = floor_t;
            break;
    }
    drawToBuff(buf, type, 0, 0);
}

void drawToBuff(uint16_t *buf, EntityType type, int offsetX, int offsetY)
{
    switch(type)
    {
        case floor_t:
        case water_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = FLOOR_X - offsetX;
            offsetY = FLOOR_Y - offsetY;
            break;
        case goal_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = GOAL_X - offsetX;
            offsetY = GOAL_Y - offsetY;
            break;

        case wall_t:
        case stone_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_X - offsetX;
            offsetY = STONE_Y - offsetY;
            break;

        case stone_e_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_E_X - offsetX;
            offsetY = STONE_E_Y - offsetY;
                break;
            
        case stone_w_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_W_X - offsetX;
            offsetY = STONE_W_Y - offsetY;
                break;
            
        case stone_nw_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_NW_X - offsetX;
            offsetY = STONE_NW_Y - offsetY;
                break;
            
        case stone_sw_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_SW_X - offsetX;
            offsetY = STONE_SW_Y - offsetY;
                break;
            
        case stone_se_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_SE_X - offsetX;
            offsetY = STONE_SE_Y - offsetY;
                break;
            
        case stone_ne_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_NE_X - offsetX;
            offsetY = STONE_NE_Y - offsetY;
                break;
            
        case stone_front_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_FRONT_X - offsetX;
            offsetY = STONE_FRONT_Y - offsetY;
                break;

        case stone_overhang_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_OVERHANG_X - offsetX;
            offsetY = STONE_OVERHANG_Y - offsetY;
            break;

        case bench_overhang_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_OVERHANG_X - offsetX;
            offsetY = STONE_OVERHANG_Y - offsetY;
            break;

        case bench_top_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_X - offsetX;
            offsetY = STONE_Y - offsetY;
            break;

        case bench_front_t:
            if(offsetX != 0 || offsetY != 0)
                return;
            offsetX = STONE_FRONT_X - offsetX;
            offsetY = STONE_FRONT_Y - offsetY;
            break;

        case plr_t:
            // Do nothing if no part of plr sprite falls inside buffer
            if(offsetX != 0 || offsetY < 0 || offsetY > 1)
                return;
            offsetX = PLR_X - offsetX;
            offsetY = PLR_Y - offsetY;
            break;

        case crate_t:
            if(offsetX != 0 || offsetY < 0 || offsetY > 1)
                return;
            offsetX = CRATE_X - offsetX;
            offsetY = CRATE_Y - offsetY;
            break;

        case crate_active_t:
            if(offsetX != 0 || offsetY < 0 || offsetY > 1)
                return;
            offsetX = CRATE_ACTIVE_X - offsetX;
            offsetY = CRATE_ACTIVE_Y - offsetY;
            break;

    };
    spriteToBuf(buf, offsetX, offsetY);
}

void screenSetup()
{
    screen.begin();
    screen.setRotation(1);
    screen.drawIntro();
}
void screenDrawBuf(uint16_t *buf, int x, int y){screen.drawCellBuffer(buf, x, y);}
void screenSuccess(){ screen.drawSuccess(); }
void screenEnvComplete(){ screen.drawMapComplete(); }

/////////////////////////////////////////////////////////
#ifdef __arm__
// should use uinstd.h to define sbrk but Due causes a conflict
extern "C" char *sbrk(int incr);
#else  // __ARM__
extern char *__brkval;
#endif // __arm__

int availableMemory()
{
    char top;
#ifdef __arm__
    return &top - reinterpret_cast<char *>(sbrk(0));
#elif defined(CORE_TEENSY) || (ARDUINO > 103 && ARDUINO != 151)
    return &top - __brkval;
#else  // __arm__
    return __brkval ? &top - __brkval : &top - __malloc_heap_start;
#endif // __arm__
}