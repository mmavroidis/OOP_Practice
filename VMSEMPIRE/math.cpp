/*
Math.cpp 
Mavroidis Mavroidis 

Math functions that are used throughout the game 

*/
#include <algorithm>
#include <cmath>
#include <ctime>



void init_rnd() {
	srand((unsigned)(time(NULL) & 0xFFFF));
}

//random number between 0 and x-1
long irand(long x) {
	if (x < 2)
		return 0;
	return (rand() % x);
}

// Return a random integer between 2 integers
int rndint(int min, int max) {
	int size = max - min + 1;
	return ((rand() % size) + min);
}

// Distance between two locions 
int dist(loc_t a, loc_t b) {
	int ax = loc_row (a);
	int ay = loc_col (a);
	int bx = loc_row (b);
	int by = loc_col (b);

	return std::max(abs(ax-bx), abs(ay-by));
};

// Square root
int sqrt(int n) {
	return static_cast<int>(floor(sqrt(n)));
}
