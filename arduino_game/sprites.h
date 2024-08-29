#ifndef game_sprite_assets_h
#define game_sprite_assets_h


#include "customtypes.h"

// from: sprites_entities.c
extern const Sprite sprite_target;
extern const Sprite sprite_crate;
extern const Sprite sprite_crate_active;
extern const Sprite sprite_powerconverter;
extern const Sprite sprite_powerconverter_active;
extern const Sprite sprite_prof_stationary_left;
extern const Sprite sprite_prof_walk_south;


extern const Sprite sprite_prof_walk_south;
extern const Sprite sprite_prof_walk_north;
extern const Sprite sprite_prof_walk_east;
extern const Sprite sprite_prof_walk_south;
extern const Sprite sprite_prof_walk_west;
extern const Sprite sprite_prof_stationary_west;
extern const Sprite sprite_prof_stationary_east;

Sprite prof_sprite_select(Entity *e);

#endif
