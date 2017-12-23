


#ifndef MAP_H

#define MAP_H

#include "player.h"
#include "utile.h"



struct da_case {
	struct pos posi;
	int state;    // 1= normal; 2= hole; 3= wall; 4= out of play; 11= player1; 12= player2;
};

struct line {
	int len;
	struct da_case lin[];
};


struct mape {
	int nb_lin;
	struct line quadri [];	
};

int line_of_sight (struct pos position, struct pos cible, struct mape world);

int distance (struct pos position, struct pos cible, struct mape world);

int movement (struct player p, struct pos destination, struct mape world);

int is_in_line (struct pos position, struct pos cible, struct mape world);



#endif