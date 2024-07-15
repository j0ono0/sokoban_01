	// Spritesheet
	// terrain maps


	#include "customtypes.h"


const uint8_t terrain_8x8[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 3, 4, 4, 4, 4, 5, 6, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 7, 8, 8, 8, 8, 8, 8, 9, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 4, 10, 11, 11, 11, 11, 11, 11, 9, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 8, 8, 8, 12, 11, 11, 11, 11, 11, 11, 9, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 9, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 13, 14, 15, 15, 16, 11, 11, 11, 11, 11, 11, 9, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 6, 7, 11, 11, 11, 11, 11, 11, 9, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 8, 8, 9, 13, 14, 16, 11, 11, 11, 11, 9, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 11, 11, 9, 2, 3, 10, 11, 11, 11, 11, 9, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 11, 11, 9, 7, 8, 12, 11, 11, 11, 11, 9, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 11, 11, 17, 10, 11, 11, 11, 11, 11, 11, 17, 5, 6, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 11, 11, 18, 12, 11, 11, 11, 11, 11, 11, 18, 8, 9, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 9, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 9, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 9, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 13, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 19, 20, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

const Entity entities_8x8[]={
		{32,10,plr_t},
		{20,22,crate_t},
};

// Collate all terrains and entities
const EnvSpec environmentList[] = {
    {terrain_8x8, entities_8x8, 0},
};

    /* width: 8, height: 168 */
    const uint16_t sprite_tile_ref_8x8[] = {
    
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,
	0x4208,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,0x8410,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4208,
	0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x0,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x4208,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,
	0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x0,0xdedb,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x4208,0x0,
	0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,0x0,0xde94,
	0x0,0x0,0x0,0x0,0x0,0x0,0x7306,0xde94,
	0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0xde94,
	0xde94,0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xac8b,0xde94,0xde94,0xac8b,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xac8b,
	0xde94,0xde94,0xde94,0xde94,0xac8b,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xac8b,0xde94,
	0xde94,0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x7306,0xde94,
	0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,0x83c9,0x7306,0xde94,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x83c9,0x7306,0xde94,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x83c9,0x7306,0xde94,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x8be9,0x7306,0xac8b,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x8be9,0x7306,0xde94,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x7306,0xac8b,0xde94,
	0x7306,0x7306,0x7306,0x7306,0x7306,0xde94,0xde94,0xde94,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0xde94,0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0x0,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0x4208,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x8410,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0xde94,0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0xde94,0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0x0,0x0,0x0,0x0,0x0,0x0,0xac8b,0xde94,
	0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0x0,0xde94,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0xde94,0x0,0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,
	0xde94,0x7306,0x0,0x0,0x0,0x0,0x0,0x0,
	0xde94,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,
	0xde94,0x7306,0xad0e,0x8be9,0x83c9,0x83c9,0x83c9,0x83c9,
	0xde94,0x7306,0xb52e,0xaced,0xaced,0xa4ad,0xa4ad,0xa4ad,
	0xde94,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xde94,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xac8b,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xde94,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xde94,0xde94,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xde94,0xac8b,0xde94,0x7306,0x7306,0x7306,0x7306,0x7306,
	0xde94,0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdedb,
	0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
};

    /* width: 16, height: 128 */
    const uint16_t plr_sprite[] = {
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x4,0x52,0x52,0x52,0x52,0x52,0x4,0x4,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x4,0x52,0x52,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,
	0x4,0x52,0x4,0x4,0x4,0xff1c,0xff1c,0xff1c,0x4,0x4,0x4,0xff1c,0x4,0x7e0,0x7e0,0x7e0,
	0x4,0x4,0x4,0x4,0x4,0xff1c,0xff1c,0xff1c,0xff1c,0xff1c,0xff1c,0xff1c,0x4,0x7e0,0x7e0,0x7e0,
	0x4,0x4,0xc490,0xc490,0x4,0xff1c,0xff1c,0xff1c,0xc490,0xff1c,0xff1c,0xc490,0x7e0,0x7e0,0x7e0,0x7e0,
	0x4,0x4,0xc490,0xc490,0x4,0xff1c,0xff1c,0xc490,0xc490,0xff1c,0xffff,0x18e3,0x7e0,0x7e0,0x7e0,0x7e0,
	0x4,0x4,0xc490,0xc490,0xc490,0xff1c,0xffff,0x0,0xc490,0xff1c,0xffff,0x18e3,0x5c3f,0x7e0,0x7e0,0x7e0,
	0x7e0,0x4,0xc490,0xc490,0xc490,0xc490,0xffff,0x0,0xc490,0xff1c,0xf4b6,0xff1c,0x893,0x5c3f,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0xc490,0xc490,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0xff1c,0xff1c,0x893,0x7f,0x5c3f,0x7e0,
	0x7e0,0x4,0x893,0x893,0x893,0xc490,0xff1c,0xff1c,0xff1c,0xff1c,0xff1c,0xc490,0x893,0x893,0x7f,0x5c3f,
	0x4,0x893,0x893,0x893,0x893,0x893,0xff1c,0xff1c,0xff1c,0xff1c,0xc490,0x7f,0x4,0x893,0x7f,0x5c3f,
	0x4,0x893,0x893,0x5c3f,0x893,0x7f,0x893,0xc490,0xc490,0xc490,0x893,0x5c3f,0x4,0x893,0x7f,0x7f,
	0x4,0x893,0x5c3f,0x5c3f,0x893,0x7f,0x7f,0x893,0x893,0x893,0x5c3f,0x5c3f,0x7e0,0x4,0xff1c,0xff1c,
	0x4,0x893,0x5c3f,0x5c3f,0x893,0x7f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x4,0xff1c,0xff1c,
	0x4,0x893,0x5c3f,0x5c3f,0x893,0x7f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x4,0x4,
	0x4,0x893,0x5c3f,0x5c3f,0x893,0x7f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x4,0x893,0x5c3f,0x5c3f,0x893,0x7f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x4,0xff1c,0xffff,0x4,0x893,0x7f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x4,0x4,0x893,0x893,0x7f,0x5c3f,0x5c3f,0x0,0x893,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x893,0x7f,0x5c3f,0x5c3f,0x0,0x893,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x7f,0x7f,0x5c3f,0x0,0x7e0,0x4,0xffff,0xffff,0x4,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x7f,0x7f,0x5c3f,0x7e0,0x7e0,0x4,0xffff,0xffff,0xffff,0x4,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x7f,0x7f,0x5c3f,0x7e0,0x7e0,0x4,0x0,0x0,0x0,0x0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x4,0xffff,0xffff,0x0,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x4,0xffff,0xffff,0xffff,0xffff,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x0,0x0,0x0,0x0,0x0,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x4,0x52,0x52,0x52,0x52,0x52,0x52,0x4,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0xc490,0xc490,0xc490,0x4,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0xc490,0xc490,0xc490,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0x4,0xc490,0xc490,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x4,0x4,0x4,0x4,0x4,0xc490,0x4,0xc490,0xffff,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x4,0x4,0x4,0x4,0x4,0xc490,0x4,0xc490,0xffff,0x0,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x4,0x4,0x4,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0xf4b6,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x4,0x4,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0xc490,0xc490,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x893,0x893,0xc490,0xc490,0xc490,0x4,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x5c3f,0x5c3f,0x893,0x893,0x893,0x893,0x4,0x893,0x893,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x4,0x893,0x893,0x893,0x893,0x893,
	0x7e0,0x5c3f,0x5c3f,0x5c3f,0x7f,0x7f,0x7f,0x5c3f,0x5c3f,0x5c3f,0x4,0x4,0x893,0x893,0xff1c,0xff1c,
	0xff1c,0xff1c,0x7f,0x893,0x4,0x893,0x7f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x4,0x4,0xff1c,0xff1c,
	0xff1c,0xff1c,0x4,0x4,0x4,0x893,0x7f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x4,
	0x4,0x4,0x7e0,0x4,0x4,0x893,0x7f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x4,0x893,0x7f,0x7f,0x5c3f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x4,0x4,0x7f,0x7f,0x7f,0x7f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x4,0x4,0x4,0x893,0x7f,0x7f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x893,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,0x4,0x5c3f,0x5c3f,0x7e0,0x4,0x4,
	0x7e0,0x893,0x893,0x893,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,0x4,0x7f,0x7f,0x4,0xffff,0x4,
	0x893,0x893,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7f,0xffff,0xffff,0xffff,0x4,
	0x0,0xffff,0xffff,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0xffff,0xffff,0x4,0x7e0,
	0x0,0xffff,0xffff,0xffff,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x4,0x7e0,0x7e0,
	0x7e0,0x0,0x0,0x0,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x52,0x52,0x52,0x52,0x52,0x52,0x4,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0xc490,0xc490,0xc490,0x4,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0xc490,0xc490,0xc490,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0x4,0xc490,0xc490,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x4,0x4,0x4,0x4,0xc490,0x4,0xc490,0xffff,0x0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x4,0x4,0x4,0x4,0xc490,0x4,0xc490,0xffff,0x0,0xff1c,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x4,0x4,0x4,0x4,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0xf4b6,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x4,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xc490,0xc490,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x893,0x893,0x893,0xc490,0xc490,0xc490,0xc490,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x5c3f,0x893,0x893,0x893,0x893,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x4,0x5c3f,0x5c3f,0x5c3f,0x7f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x4,0x7f,0x5c3f,0x5c3f,0x7f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x4,0x7f,0x5c3f,0x5c3f,0x7f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x7f,0x5c3f,0x5c3f,0x7f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x4,0x4,0x5c3f,0x5c3f,0x7f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x893,0x4,0xff1c,0xff1c,0x7f,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x0,0x0,0x893,0x4,0xff1c,0xff1c,0x7f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x0,0xffff,0x893,0x893,0x893,0x893,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x0,0xffff,0x893,0x7f,0x7f,0x7f,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x0,0xffff,0x893,0x7f,0x5c3f,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x0,0x0,0x893,0x7f,0x5c3f,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x7f,0x5c3f,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x7f,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x0,0xffff,0xffff,0x0,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x0,0xffff,0xffff,0xffff,0xffff,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x0,0x0,0x0,0x0,0x0,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x52,0x52,0x52,0x52,0x52,0x52,0x4,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x4,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x4,0x52,0x4,0x4,0x4,0x4,0xc490,0xc490,0xc490,0x4,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0xc490,0xc490,0xc490,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x52,0x4,0x4,0x4,0x4,0x4,0xc490,0xc490,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x4,0x4,0x4,0x4,0xc490,0x4,0xc490,0xffff,0x0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x4,0x4,0x4,0x4,0x4,0xc490,0x4,0xc490,0xffff,0x0,0xff1c,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x4,0x4,0x4,0x4,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0xf4b6,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x4,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xc490,0xc490,0xc490,0xc490,0xff1c,0xff1c,0xff1c,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x893,0x5c3f,0x5c3f,0xc490,0xc490,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x893,0x7f,0x7f,0x5c3f,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x893,0x4,0x4,0x893,0x7f,0x7f,0x7f,0x5c3f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x893,0x893,0x4,0x4,0x893,0x4,0x4,0x7f,0x7f,0x7f,0x5c3f,0x5c3f,0x7e0,0x7e0,0x7e0,
	0xff1c,0x893,0x893,0x4,0x4,0x893,0x893,0x4,0x893,0x893,0x893,0x7f,0x893,0x5c3f,0xff1c,0xff1c,
	0xff1c,0xff1c,0x4,0x7e0,0x4,0x893,0x893,0x893,0x4,0x4,0x4,0x4,0x893,0x5c3f,0xff1c,0xff1c,
	0x4,0x4,0x7e0,0x7e0,0x4,0x893,0x5c3f,0x5c3f,0x4,0x4,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x893,0x7f,0x5c3f,0x5c3f,0x4,0x4,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x893,0x893,0x7f,0x5c3f,0x5c3f,0x4,0x4,0x4,0x893,0x7f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x893,0x7f,0x5c3f,0x5c3f,0x5c3f,0x4,0x4,0x893,0x7f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x893,0x7f,0x5c3f,0x5c3f,0x4,0x4,0x4,0x4,0x7f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x893,0x893,0x5c3f,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x4,0x893,0x7f,0x7e0,0x4,0x4,0x7e0,
	0x893,0x893,0x5c3f,0x5c3f,0x893,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x893,0x7f,0x4,0xffff,0x4,0x7e0,
	0x893,0x893,0x7f,0x5c3f,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x893,0xffff,0xffff,0xffff,0x4,0x7e0,
	0x0,0xffff,0xffff,0x0,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0xffff,0xffff,0x4,0x7e0,0x7e0,
	0x0,0xffff,0xffff,0xffff,0xffff,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x4,0x4,0x7e0,0x7e0,0x7e0,
	0x7e0,0x0,0x0,0x0,0x0,0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
};