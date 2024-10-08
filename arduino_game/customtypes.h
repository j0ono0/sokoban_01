#ifndef game_customtypes_h
#define game_customtypes_h

#include <inttypes.h>
#include <stdbool.h>
#include "config.h"
// I had these in engine.h but some issue was causing compile
// to fail when including engine.h in resources.c!


typedef enum InputButtons
{
    // <button>_<set>_<direction>
    btn_1_n,
    btn_1_e,
    btn_1_s,
    btn_1_w,
    btn_2_n,
    btn_2_e,
    btn_2_s,
    btn_2_w,
    btn_3_n,
    btn_3_e,
    btn_3_s,
    btn_3_w,
} InputButtons;

typedef struct Rect
{
    int x;
    int y;
    int w;
    int h;
} Rect;

typedef struct Dimensions
{
    int w;
    int h;
} Dimensions;

typedef struct Location
{
    int x;
    int y;
} Location;

typedef enum EntityType
{
    plr_t,
    hoodie_t,
    strongman_t,
    officer_t,
    sunlover_t,
    office_chair_t,
    desktop_terminal_t,
    dotpanel_right_t,
    inbuilt_terminal_t,
    desk_clutter_t,
    target_t,
    crate_t,
    crate_active_t,
    powerconverter_t,
    powerconverter_active_t,
    null_t,
} EntityType;

typedef struct SpriteSheet
{
    uint8_t w;
    uint16_t *addr;
} SpriteSheet;

typedef struct SpriteFrame
{
    const uint8_t w;
    const uint8_t h;
    const uint16_t *addr;
} SpriteFrame;

typedef struct Sprite
{
    const uint8_t length;
    // clock_divider slows animation speed. 
    // Should be a factor of ANIMATIONSTEPS for even frame display lengths.
    const uint8_t clock_divider;
    const SpriteFrame **frameset;
} Sprite;

// Declarations here due to circular refs.
typedef struct Entity Entity;
typedef struct GameManager GameManager;

typedef struct Entity
{
    EntityType type;
    int x;
    int y;
    // track if entity renders under (0) or over (1) terrain overlay
    int layer;
    // track movement
    int mx;
    int my;
    void (*behaviour)(struct Entity *self, GameManager *gm);
    const Sprite *sprite;
} Entity;

typedef struct GameManager
{
    uint8_t e_len;
    Entity entities[MAX_ENTITIES];
    const uint8_t *terrain;
    uint8_t palette;
    uint16_t animation_clock;
} GameManager;

//////////////////////////////////////////////////
//
//  'layer' in TileMeta.
//  expected layers currently are:
//  0: base terrain
//  1: entities as 'ground cover'
//  2: entities located on base terrain
//  3: raised terrain (overlaps entities on same location)
//  4: entities located on raised terrain
//
//////////////////////////////////////////////////

typedef struct TileMeta
{
    int layer;
    bool blocks_motion;
} TileMeta;

typedef struct EntitySpecs
{
    EntityType type;
    Dimensions dimensions;
    const uint16_t *sprite_addr;
} EntitySpecs;

typedef struct EnvSpec
{
    const uint8_t *terrain;
    const uint8_t palette;
    const Entity *entities;
    const uint8_t color_theme;
    const int entity_count;
} EnvSpec;

#endif