#include "engine.h"

Extended_Tft screen = Extended_Tft(TFT_CS, TFT_DC);

// throttle animation cycles
unsigned long ani_clock = 0;

// Current environment
int envId = 0;

// Entities currently in environment.
Entity currentEntities[MAX_ENTITIES];
int currentEntityLength = 0;

const TileSpec tile_layers[] = {
    {void_tn, null_to, true},
    {floor_tn, null_to, false},
    {stone_tn, null_to, true},
    {wall_cv_ne_tn, null_to, true},
    {wall_n_tn, null_to, true},
    {wall_cv_nw_tn, null_to, true},
    {stoneedge_cv_se_tn, stoneedge_cv_se_to, false},
    {stoneedge_s_tn, stone_edge_s_to, false},
    {stoneedge_sw_tn, stoneedge_cv_sw_to, false},
    {stoneedge_e_tn, null_to, true},
    {stoneedge_w_tn, null_to, true},
    {stoneedge_cv_ne_tn, null_to, true},
    {stoneedge_n_tn, null_to, true},
    {stoneedge_cv_nw_tn, null_to, true},
    {stoneedge_cc_wnw_tn, null_to, true},
    {stoneedge_cc_nw_tn, null_to, true},
    {stoneedge_cc_ne_tn, null_to, true},
    {stoneedge_cc_ene_tn, null_to, true},
    {stoneedge_cc_wsw_tn, null_to, true},
    {stoneedge_cc_sw_tn, stoneedge_cc_sw_to, false},
    {stoneedge_cc_se_tn, stoneedge_cc_se_to, false},
    {stoneedge_cc_ese_tn, null_to, true},
};

// Sprite locations 
// TODO: ?? assign an origin (x,y) for each sprite ??
const Rect spriteSrc[] = {
    {0, 0, 16, 32},   // Plr standing
    {0, 32, 16, 32},  // Plr walking 1
    {0, 64, 16, 32},  // Plr walking 2
    {0, 96, 16, 32},  // Plr walking 3
    {0, 128, 16, 32}, // Crate
    {0, 160, 16, 32}, // Crate active
    {0, 192, 16, 32}, // Target
};


/////////////////////////////////////////////////////

void populateCurrentEntities()
{
    currentEntityLength = 0;
    for(int i = 0; i < environmentList[envId].entity_count; ++i)
    {
        currentEntities[currentEntityLength++] = environmentList[envId].entities[i];
    }
}

Entity *assignPlayer()
{
    for(int i = 0; i < currentEntityLength; ++i)
    {
        if(currentEntities[i].type == plr_t)
            currentEntities[i].behaviour = &act_test;
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


void drawAllLocs()
{

    drawPixelTerrain(12*ENV_UNIT, 6*ENV_UNIT, 2*ENV_UNIT, 1*ENV_UNIT + 14);
    drawPixelTerrain(12*ENV_UNIT, 8*ENV_UNIT, 2*ENV_UNIT, 1*ENV_UNIT);

    // drawTerrain(0, 0, TERRAIN_WIDTH, TERRAIN_HEIGHT);

    // uint16_t buf[512];
    // Entity *e = currentEntities;
    // const Rect *s_spec = spriteSrc;
    // int buf_start;

    // // Draw entities (just plr for now)
    // for(int i = 0; i < currentEntityLength; ++i)
    // {
    //     e = &currentEntities[i];
    //     switch(e->type)
    //     {
    //         case plr_t:
    //             s_spec = &spriteSrc[1]; // plr standing
    //             blitTerrain(e->x, e->y-2, 2, 4, buf);
    //             blitEntity(0, 0, 2, 4, buf, &entity_sprites[0]); 
    //             screen.writeRect(e->x*TERRAIN_UNIT, (e->y-2)*TERRAIN_UNIT, 2*TERRAIN_UNIT, 4*TERRAIN_UNIT, buf);
    //             break;

    //         case crate_t:
    //             s_spec = &spriteSrc[4];
    //             buf_start = spriteSrc[4].y * spriteSrc[4].w; // index = 4
    //             blitTerrain(e->x, e->y-2, 2, 4, buf);
    //             blitEntity(0, 0, 2, 4, buf, &entity_sprites[buf_start]); 
    //             screen.writeRect(e->x*TERRAIN_UNIT, (e->y-2)*TERRAIN_UNIT, 2*TERRAIN_UNIT, 4*TERRAIN_UNIT, buf);
    //             break;

    //         case target_t:
    //             s_spec = &spriteSrc[6];
    //             buf_start = s_spec->y * s_spec->w;
    //             blitTerrain(e->x, e->y-2, 2, 2, buf);
    //             blitEntity(0, 0, 2, 2, buf, &entity_sprites[buf_start]); 
    //             screen.writeRect(e->x*TERRAIN_UNIT, (e->y)*TERRAIN_UNIT, 2*TERRAIN_UNIT, 2*TERRAIN_UNIT, buf);
    //             break;
    //         default:
    //             break;
    //     }
    // }


}

void blitOverlay(int x, int y, int w, int h, uint16_t *buf)
{
    // x, y, w, and h are in multiples of tiles (grid_size)
    uint16_t *cellbuf = buf;

    for(int i = 0; i < h; ++i)
    {
        for(int j = 0; j < w; ++j)
        {
            uint16_t tileId = environmentList[envId].terrain[(y + i) * TERRAIN_WIDTH + (x + j)];
            int overlayId = tile_layers[tileId].overlay;

            // Skip tiles with no overlay
            if( overlayId == null_to)
                continue;

            const uint16_t *spritePtr = &sprite_8x8_overlays[TERRAIN_UNIT * TERRAIN_UNIT * (overlayId)];

            // Set cellbuf to start of tile section
            cellbuf = &buf[i*w*TERRAIN_UNIT*TERRAIN_UNIT + j*TERRAIN_UNIT];

            for(int row = 0; row < TERRAIN_UNIT; ++row)
            {
                for(int col = 0; col < TERRAIN_UNIT; ++col)
                {
                    if(*spritePtr != COLOR_TRANSPARENT)
                    {
                    // Transfer row to buf
                    *cellbuf = *spritePtr;
                    }
                    ++cellbuf;
                    ++spritePtr;
                }
                // Move cellbuf to start of next line
                cellbuf += w*TERRAIN_UNIT - TERRAIN_UNIT;
            }
        }
    }
}

void blitTerrain(int x, int y, int w, int h, uint16_t *buf)
{
    // x, y, w, and h are in multiples of tiles (grid_size)
    uint16_t *cellbuf = buf;

    for(int i = 0; i < h; ++i)
    {
        for(int j = 0; j < w; ++j)
        {
            uint16_t tileId = environmentList[envId].terrain[(y + i) * TERRAIN_WIDTH + (x + j)];
            const uint16_t *spritePtr = &sprite_tile_ref_8x8[TERRAIN_UNIT * TERRAIN_UNIT * tileId];

            // Set cellbuf to start of tile section
            cellbuf = &buf[i*w*TERRAIN_UNIT*TERRAIN_UNIT + j*TERRAIN_UNIT];

            for(int row = 0; row < TERRAIN_UNIT; ++row)
            {
                for(int col = 0; col < TERRAIN_UNIT; ++col)
                {
                    // Transfer row to buf
                    *cellbuf++ = *spritePtr++;
                }
                // Move cellbuf to start of next line
                cellbuf += w*TERRAIN_UNIT - TERRAIN_UNIT;
            }
        }
    }
}

void drawPixelTerrain(int x, int y, int w, int h)
{
    // Draw to screen terrain tiles cropped and positioned to pixel dimensions (*not whole tiles)
    // All arguments are px units.
    uint16_t buf[w * h];
    uint16_t *buf_ptr = buf;

    // round x and y down to whole tiles
    int tx = x / TERRAIN_UNIT;
    int ty = y / TERRAIN_UNIT;

    //round w and h up
    int tw = 1 + (w - 1) / TERRAIN_UNIT;
    int th = 1 + (h - 1) / TERRAIN_UNIT;


    // Iterate through tiles
    for(int tile_row = 0 ; tile_row < th; ++tile_row)
    {
        for(int tile_col = 0; tile_col < tw; ++tile_col)
        {
            // Tile absolute px boundaries
            int x1 = (tx * TERRAIN_UNIT) + tile_col;
            int x2 = x1 + TERRAIN_UNIT;
            int y1 = (y + tile_row) * TERRAIN_UNIT;
            int y2 = y1 + TERRAIN_UNIT;

            // calc relative section of tile to transfer
            int start_x = x1 - x;
            


            //  ** set tile ptr **
            uint16_t tileId = environmentList[envId].terrain[(ty + tile_row) * TERRAIN_WIDTH + (tx + tile_col)];
            const uint16_t *tile_ptr = &sprite_tile_ref_8x8[TERRAIN_UNIT * TERRAIN_UNIT * tileId];


            // // Iterate pixels in each tile
            // for( int px_row = 0; px_row < TERRAIN_UNIT; ++px_row)
            // {
            //     for( int px_col = 0; px_col < TERRAIN_UNIT; ++px_col)
            //     {
        
            //         // check pixel is inside requested rect
            //         int px_x = px_col + (tile_col * TERRAIN_UNIT) + x;
            //         int px_y = px_row + (tile_row * TERRAIN_UNIT) + y;
            //         if(px_x >= x && px_x <= x + w && px_y >= y && px_y <= y + h)
            //         {
            //             // convert abs x and y to local and set buf_ptr
            //             buf_ptr = &buf[(px_y - y) * w + px_x - x];

            //             Serial.print(px_col);
            //             Serial.print(", ");
            //             *buf_ptr = *tile_ptr;
            //         }

            //         ++tile_ptr;
            //     }
            //     Serial.print("\n");

            // }
            // Serial.print("tile end.\n");
        }
        Serial.print("row end.\n");
    }
    screen.writeRect(x, y, w ,h ,buf);
}


void drawTerrain(int x, int y, int w, int h)
{
    uint16_t buf[w * TERRAIN_UNIT * h * TERRAIN_UNIT];
    blitTerrain(x, y, w, h, buf);
    screen.writeRect(x * TERRAIN_UNIT, y * TERRAIN_UNIT, w * TERRAIN_UNIT , h * TERRAIN_UNIT , buf);
}

void blitEntity(int x, int y, int w, int h, uint16_t *buf, const uint16_t *spriteSrc)
{
    // x, y are in PIXEL units <------- IMPORTANT! ---- 
    // w, h in tiles
    // w and h are dimensions of buf

    uint16_t *bufPtr = &buf[y * w * TERRAIN_UNIT + x];
    
    // copy sprite into buf. 
    //Plr is 2x4 tiles (512 pixels) big so row = 2 and col = 4
    for(int row = 0; row < 4 * TERRAIN_UNIT ; ++row)
    {
        for(int col = 0; col < 2 * TERRAIN_UNIT ; ++col)
        {
            // Transfer row to buf
            if(*spriteSrc != COLOR_TRANSPARENT)
                *bufPtr = *spriteSrc;
            ++bufPtr;
            ++spriteSrc;
        }
        // Move to start of next row
        bufPtr += w * TERRAIN_UNIT - 2 * TERRAIN_UNIT;
    }
}

void moveEntity(Entity *e, int dx, int dy)
{

    if(e->mx != 0 || e->my != 0)
        return;

    // Update entity coordinates
    // note entity moves x2 tiles
    e->x += dx * 2;
    e->y += dy * 2;
    // mx and my are in pixels.
    // they indicate direction and distance sprite has to move
    // note *2 to move 2 tiles
    e->mx += dx * TERRAIN_UNIT * 2;
    e->my += dy * TERRAIN_UNIT * 2;
}

void updateSpriteLocation(Entity *e)
{
    // entity sprite tiles are either 4x4 (horizontal move) or 2x6 (vertical move)
    // Use larger of the two.
    uint16_t buf[4096];

    int buf_w = 2;
    int buf_h = 4;
    int terrain_x = e->x;
    int terrain_y = (e->y - 2); // offset to allow sprite overlay

    int sprite_x = 0;
    int sprite_y = 0;

    int STEP_DISTANCE = 2; // TODO: this is not cool setup to control step distance

    // buffer shape and screen-location depend on moving up/down or left/right
    // NOTE: mx and my are offset. ie direction FROM current x and y
    if(e->mx < 0){
        // move west
        buf_w = 4;
        terrain_x = e->x;
        terrain_y = e->y-2;
        e->mx += 1 * STEP_DISTANCE;
        sprite_x = -1 * e->mx;
    }
    else if(e->mx > 0){
        // move east
        buf_w = 4;
        terrain_x = e->x-2;
        terrain_y = e->y-2;
        e->mx -= 1 * STEP_DISTANCE;
        sprite_x = 2*TERRAIN_UNIT - e->mx;
    }
    else if(e->my < 0){
        // move north
        buf_h = 6;
        terrain_x = e->x;
        terrain_y = e->y-2;
        e->my += 1 * STEP_DISTANCE;
        sprite_y = -1 * e->my;
    }
    else if (e->my > 0){
        // move south
        buf_h = 6;
        terrain_x = e->x;
        terrain_y = e->y-4;
        e->my -= 1 * STEP_DISTANCE;
        sprite_y = 2*TERRAIN_UNIT - e->my;
    }


    int sprite_index = 0;

    //////////////////////////////////////////////
    // TODO: move this into its own function?
    //////////////////////////////////////////////
    switch(e->type)
    {
        case plr_t:
            sprite_index = 0;
            break;
        case crate_t:
            sprite_index = 2048;
            break;
        default:
            sprite_index = 0;
            break;
    }



    blitTerrain(terrain_x, terrain_y, buf_w, buf_h, buf); 
    blitEntity(sprite_x, sprite_y, buf_w, buf_h, buf, &entity_sprites[sprite_index]);  

    ////////////////////////////////////////////////////////
    // TODO: blit entity in front?
    ////////////////////////////////////////////////////////

    blitOverlay(terrain_x, terrain_y, buf_w, buf_h, buf); 

    screen.writeRect(terrain_x*TERRAIN_UNIT, terrain_y*TERRAIN_UNIT, buf_w*TERRAIN_UNIT, buf_h*TERRAIN_UNIT, buf);


}


void updateSprites()
{
    int now = millis();
    if(now - ani_clock > 80)
    {
        ani_clock = now;
        for(int i = 0; i < currentEntityLength; ++i)
        {
            if(currentEntities[i].mx != 0 || currentEntities[i].my != 0)
                updateSpriteLocation(&currentEntities[i]);
        }
    }
}

/////////////////////////////////////////////////////


int tileAtLoc(int x, int y)
{
    return environmentList[envId].terrain[y * TERRAIN_WIDTH + x];
}


bool inbounds(int x, int y)
{
    if (x < 0 || y < 0 || x > TERRAIN_WIDTH || y > TERRAIN_HEIGHT)
    {
        return false;
    }
    return true;
}


void updateCrate(Entity *crate)
{
    // Numbers are tile indexes from 'tile_ref_01.png'
    if(tileAtLoc(crate->x, crate->y) == 9 || tileAtLoc(crate->x, crate->y) == 12)
        crate->type = crate_active_t;
    else
        crate->type = crate_t;
}


bool gameSolved()
{
    // Test if every goal has a crate on the same location.
    for(int y = 0; y < TERRAIN_HEIGHT; y++)
    {
        for(int x = 0; x < TERRAIN_WIDTH; x++)
        {
            // Numbers are tile indexes from 'tile_ref_01.png'
            if(tileAtLoc(x, y) == 9 || tileAtLoc(x, y) == 12)
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
    for(int i = 0; i < currentEntityLength; ++i)
    {
        if(currentEntities[i].x == x && currentEntities[i].y == y)
            return &currentEntities[i];
    }
    return NULL;
}




bool terrainBlocksMovement(int x, int y, int w, int h)
{
    // Width and height are size of entity
    for(int i = 0; i < h; ++i)
    {
        for(int j = 0; j < w; ++j)
        {
            if(tile_layers[tileAtLoc(x+i,y+j)].blocks_motion)
                return true;
        }
    }
    return false;
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


void act_test()
{
    Serial.println("hello entity animation action.");
}







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