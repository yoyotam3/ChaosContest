#include "src/game/envfx_snow.h"

const GeoLayout shadow_mario_title_Mario2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, shadow_mario_title_000_switch_001_displaylist_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout shadow_mario_title_Mario3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, shadow_mario_title_000_switch_002_displaylist_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout shadow_mario_title_Mario4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, shadow_mario_title_000_switch_003_displaylist_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout shadow_mario_title_Mario5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, shadow_mario_title_000_switch_004_displaylist_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout shadow_mario_title_Mario6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, shadow_mario_title_000_switch_005_displaylist_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout shadow_mario_title_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 50),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(32, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, shadow_mario_title_000_displaylist_mesh_layer_4),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, shadow_mario_title_Mario2),
				GEO_BRANCH(1, shadow_mario_title_Mario2),
				GEO_BRANCH(1, shadow_mario_title_Mario2),					
				GEO_BRANCH(1, shadow_mario_title_Mario3),
				GEO_BRANCH(1, shadow_mario_title_Mario3),
				GEO_BRANCH(1, shadow_mario_title_Mario3),
				GEO_BRANCH(1, shadow_mario_title_Mario4),
				GEO_BRANCH(1, shadow_mario_title_Mario4),
				GEO_BRANCH(1, shadow_mario_title_Mario4),
				GEO_BRANCH(1, shadow_mario_title_Mario5),
				GEO_BRANCH(1, shadow_mario_title_Mario5),
				GEO_BRANCH(1, shadow_mario_title_Mario5),
				GEO_BRANCH(1, shadow_mario_title_Mario6),
				GEO_BRANCH(1, shadow_mario_title_Mario6),
				GEO_BRANCH(1, shadow_mario_title_Mario6),
				GEO_BRANCH(1, shadow_mario_title_Mario6),
				GEO_BRANCH(1, shadow_mario_title_Mario6),
				GEO_BRANCH(1, shadow_mario_title_Mario5),
				GEO_BRANCH(1, shadow_mario_title_Mario5),
				GEO_BRANCH(1, shadow_mario_title_Mario5),
				GEO_BRANCH(1, shadow_mario_title_Mario4),
				GEO_BRANCH(1, shadow_mario_title_Mario4),
				GEO_BRANCH(1, shadow_mario_title_Mario4),
				GEO_BRANCH(1, shadow_mario_title_Mario3),
				GEO_BRANCH(1, shadow_mario_title_Mario3),
				GEO_BRANCH(1, shadow_mario_title_Mario3),
				GEO_BRANCH(1, shadow_mario_title_Mario2),
				GEO_BRANCH(1, shadow_mario_title_Mario2),
				GEO_BRANCH(1, shadow_mario_title_Mario2),
				GEO_BRANCH(1, shadow_mario_title_Mario2),
				GEO_BRANCH(1, shadow_mario_title_Mario2),
				GEO_BRANCH(1, shadow_mario_title_Mario2),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
