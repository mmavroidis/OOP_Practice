/* Unit Creation and functionality */

#include<stdbool.h>
#ifndef NULL
#define NULL 0
#endif

enum unitType{ 
	army = 0,
	fighter = 1,
	patrol = 2,
	destroyer = 3,
	submarine = 4,
	transport = 5,
	carrier = 6, 
	battleship = 7,
	satellite = 8,
	numObjects = 9
}

#define noPeice ((char)255) //White space

enum Move{
	north = 0,
	northEast = 1,
	east = 2,
	southEast = 3, 
	south = 4,
	southWest = 5,
	west = -6, 
	northWest 7
}

enum specialMove{
	noFunc = -1,
	random = -2,
	sentry = -3,
	fill = -4,
	land = -5,
	explore = -6,
	armyLoad = -7,
	armyAttack = -8,
	ttLoad = -9,
	repair = -10,
	wfTransport = -11,
	moveNorth = -12,
	moveNorthEast = -13,
	moveEast = -14,
	moveSouthEast = -15,
	moveSouth = -16,
	moveSouthWest = -17,
	moveWest = -18,
	moveNorthWest = -19
}



