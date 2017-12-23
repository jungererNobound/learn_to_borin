

#ifndef PLAYER_H

#define PLAYER_H

#include "map.h"
#include "utile.h"




struct player {
	int team;
	int pv;
	int pa;
	int pm;
	int po;
	struct pos posi;
	int tacle;
	int esquive;
	int force;
	int intel;
	int chance;
	int agi;
	int sagesse;
	int puissance;
	int dommages;
	int dommages_terre;
	int dommages_feu;
	int dommages_eau;
	int dommages_air;
	int resistance_terre;
	int resistance_feu;
	int resistance_eau;
	int resistance_air;
	int resper_terre;
	int rezper_feu;
	int rezper_eau;
	int rezper_air;
	int esquive_pa;
	int esquive_pm;
	int retrait_pa;
	int retrait_pm;
};



struct spell {
	int delai;
	int (*effet)(struct player, struct player, int, int, struct mape);
	int nb_util;
};

#endif