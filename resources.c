	// Spritesheet
	// terrain maps

	#include <stddef.h>
	#include "customtypes.h"


const uint8_t terrain_8x8[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 14, 15, 12, 12, 12, 12, 16, 17, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 10, 4, 4, 4, 4, 4, 4, 9, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 14, 15, 12, 12, 13, 1, 1, 1, 1, 1, 1, 9, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 4, 4, 4, 5, 1, 1, 1, 1, 1, 1, 9, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 18, 19, 7, 7, 8, 1, 1, 1, 1, 1, 1, 9, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 14, 15, 16, 17, 10, 1, 1, 1, 1, 1, 1, 9, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 4, 4, 9, 18, 19, 8, 1, 1, 1, 1, 9, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 1, 1, 9, 14, 15, 13, 1, 1, 1, 1, 9, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 1, 1, 9, 10, 4, 5, 1, 1, 1, 1, 9, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 1, 1, 11, 13, 1, 1, 1, 1, 1, 1, 11, 16, 17, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 1, 1, 3, 5, 1, 1, 1, 1, 1, 1, 3, 4, 9, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 18, 19, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 20, 21, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
};

const Entity entities_8x8[]={
		{plr_t, 32, 10, 0, 0, NULL},
		{crate_t, 32, 14, 0, 0, NULL},
		{target_t, 32, 16, 0, 0, NULL},
};

// Collate all terrains and entities
const EnvSpec environmentList[] = {
    {terrain_8x8, entities_8x8, 3},
};

 /* width: 8, height: 176 */
const uint16_t sprite_tile_ref_8x8[] = {
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0xde94,0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xac8b,0xde94,0xde94,0xac8b,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xac8b,
	0xde94,0xde94,0xde94,0xde94,0xac8b,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xac8b,0xde94,
	0xde94,0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0xde94,0x7306,0xad0e,0x8be9,0x83c9,0x83c9,0x83c9,0x83c9,
	0xde94,0x7306,0xb52e,0xaced,0xaced,0xa4ad,0xa4ad,0xa4ad,
	0xde94,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xde94,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xac8b,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xde94,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xde94,0xde94,0x7306,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xde94,0xac8b,0xde94,0x7306,0x7306,0x7306,0x7306,0x7306,
	0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,
	0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xc5b0,
	0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,
	0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x83c9,0x7306,0xde94,
	0xa4ad,0xa4ad,0xa4ad,0xa4ad,0xa4ad,0x83c9,0x7306,0xde94,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x83c9,0x7306,0xde94,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x83c9,0x7306,0xde94,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x8be9,0x7306,0xac8b,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x8be9,0x7306,0xde94,
	0xc5b0,0xc5b0,0xc5b0,0xc5b0,0xb52e,0x7306,0xac8b,0xde94,
	0x7306,0x7306,0x7306,0x7306,0x7306,0xde94,0xde94,0xde94,
	0xde94,0xac8b,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,0xde94,
	0xde94,0xde94,0x0,0x0,0x0,0x0,0x0,0x0,
	0xde94,0x0,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x0,0xdedb,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
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
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x0,0xdedb,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
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
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x4208,0x0,
	0x4208,0x4208,0x4208,0x4208,0x4208,0x4208,0x0,0xde94,
	0x0,0x0,0x0,0x0,0x0,0x0,0x7306,0xde94,
	0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0x7306,0xde94,
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

/* width: 8, height: 32 */
const uint16_t sprite_8x8_overlays[] = {
    
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x7e0,0x0,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x0,0xdedb,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x0,0xdedb,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x7e0,0x7e0,
	0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0x0,0x7e0,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x4208,0x0,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x4208,0x0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x4208,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x8410,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdedb,
	0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0xdedb,0x8410,
	0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,
	0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,0x8410,0x8410,
	0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9cf3,0x8410,
	0x8410,0x9cf3,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,
};


/* width: 16, height: 208 */
const uint16_t entity_sprites[] = {
    
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
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x3101,0x7e0,
	0x0,0xddae,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0x3101,
	0x0,0xddae,0x6a22,0x9b44,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xc4ca,0x3101,
	0x0,0xddae,0x8b03,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xfed4,0xc4ca,0x3101,
	0x0,0xddae,0x8b03,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xfed4,0xc4ca,0x3101,
	0x0,0xddae,0x8b03,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xfed4,0xc4ca,0x0,
	0x0,0xddae,0x8b03,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xfed4,0xc4ca,0x0,
	0x0,0xddae,0x8b03,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xfed4,0xc4ca,0x0,
	0x0,0xddae,0x8b03,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xfed4,0xc4ca,0x0,
	0x0,0xddae,0x8b03,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xfed4,0xc4ca,0x0,
	0x0,0xddae,0x8b03,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xfed4,0xc4ca,0x0,
	0x0,0xddae,0xfed4,0xfed4,0xfed4,0xfed4,0xfed4,0xfed4,0xfed4,0xfed4,0xfed4,0xfed4,0xfed4,0xfed4,0xc4ca,0x0,
	0x0,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0xc4ca,0x0,
	0x0,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0x0,
	0x0,0xa3a4,0x4981,0x6a22,0x4981,0x6a22,0x4981,0x4981,0x4981,0x6a22,0x4981,0x6a22,0x4981,0x4981,0xa3a4,0x0,
	0x0,0xa3a4,0x6a22,0x4981,0x82a3,0x6a22,0x82a3,0x6a22,0x82a3,0x4981,0x82a3,0x6a22,0x82a3,0x4981,0xa3a4,0x0,
	0x0,0xa3a4,0x82a3,0x82a3,0xa3a4,0xa3a4,0x82a3,0xa3a4,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0xa3a4,0x0,
	0x0,0xa3a4,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0xa3a4,0x82a3,0xa3a4,0x0,
	0x0,0xa3a4,0xa3a4,0x82a3,0x82a3,0x82a3,0x82a3,0xa3a4,0x82a3,0x82a3,0xa3a4,0x82a3,0x82a3,0x82a3,0x82a3,0x0,
	0x0,0xa3a4,0x82a3,0x82a3,0x82a3,0xa3a4,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0xa3a4,0x0,
	0x0,0xa3a4,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0xa3a4,0xa3a4,0x82a3,0xa3a4,0x0,
	0x0,0xa3a4,0x82a3,0xa3a4,0x82a3,0x82a3,0x82a3,0x82a3,0x82a3,0xa3a4,0x82a3,0x82a3,0x82a3,0x82a3,0xa3a4,0x0,
	0x0,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0xa3a4,0x0,
	0x7e0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x3061,0x3061,0x3061,0x3061,0x3061,0x3061,0x3061,0x3061,0x3061,0x3061,0x3061,0x3061,0x3061,0x3061,0x7e0,
	0x3061,0xe3ed,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0x3061,
	0x3061,0xe3ed,0x70a1,0xa163,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xcb09,0x3061,
	0x3061,0xe3ed,0x9122,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xfd94,0xcb09,0x3061,
	0x3061,0xe3ed,0x9122,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xfd94,0xcb09,0x3061,
	0x3061,0xe3ed,0x9122,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xfd94,0xcb09,0x0,
	0x3061,0xe3ed,0x9122,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xfd94,0xcb09,0x0,
	0x3061,0xe3ed,0x9122,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xfd94,0xcb09,0x0,
	0x3061,0xe3ed,0x9122,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xfd94,0xcb09,0x0,
	0x3061,0xe3ed,0x9122,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xfd94,0xcb09,0x0,
	0x3061,0xe3ed,0x9122,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xfd94,0xcb09,0x0,
	0x3061,0xe3ed,0xfd94,0xfd94,0xfd94,0xfd94,0xfd94,0xfd94,0xfd94,0xfd94,0xfd94,0xfd94,0xfd94,0xfd94,0xcb09,0x0,
	0x3061,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0xcb09,0x0,
	0x3061,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0x0,
	0x3061,0xa9a3,0x4880,0x70a1,0x4880,0x70a1,0x4880,0x4880,0x4880,0x70a1,0x4880,0x70a1,0x4880,0x4880,0xa9a3,0x0,
	0x3061,0xa9a3,0x70a1,0x4880,0x8902,0x70a1,0x8902,0x70a1,0x8902,0x4880,0x8902,0x70a1,0x8902,0x4880,0xa9a3,0x0,
	0x3061,0xa9a3,0x8902,0x8902,0xa9a3,0xa9a3,0x8902,0xa9a3,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0xa9a3,0x0,
	0x3061,0xa9a3,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0xa9a3,0x8902,0xa9a3,0x0,
	0x3061,0xa9a3,0xa9a3,0x8902,0x8902,0x8902,0x8902,0xa9a3,0x8902,0x8902,0xa9a3,0x8902,0x8902,0x8902,0x8902,0x0,
	0x3061,0xa9a3,0x8902,0x8902,0x8902,0xa9a3,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0xa9a3,0x0,
	0x3061,0xa9a3,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0x8902,0xa9a3,0xa9a3,0x8902,0xa9a3,0x0,
	0x3061,0xa9a3,0x8902,0xa9a3,0x8902,0x8902,0x8902,0x8902,0x8902,0xa9a3,0x8902,0x8902,0x8902,0x8902,0xa9a3,0x0,
	0x3061,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0xa9a3,0x0,
	0x7e0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0xd924,0xd924,0x7e0,0xd924,0xd924,0x7e0,0xd924,0xd924,0x7e0,0xd924,0x7e0,0xd924,0x7e0,0x7e0,
	0x7e0,0xd924,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0xd924,0x7e0,
	0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0xd924,0x7e0,
	0x7e0,0xd924,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,
	0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,
	0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,
	0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,
	0x7e0,0xd924,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0x7e0,0xd924,0x7e0,
	0x7e0,0xd924,0xd924,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0xd924,0xd924,0x7e0,
	0x7e0,0x7e0,0xd924,0x7e0,0xd924,0x7e0,0xd924,0xd924,0x7e0,0xd924,0xd924,0x7e0,0xd924,0xd924,0x7e0,0x7e0,
	0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,0x7e0,
};