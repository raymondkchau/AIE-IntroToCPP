#include "mathutils.h"
#include <cmath>

//returns the lesser of the two
int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

//returns the greater of the two
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

//returns a value clamped within a range
int clamp(int lower, int upper, int value)
{
	if (value < lower)
	{
		value = lower;
	}
	else if (value > upper)
	{
		value = upper;
	}

	return value;
}

//returns the distance between two points
float dist(float x1, float y1, float x2, float y2)
{
	float distX = (x2 - x1) * (x2 - x1);
	float distY = (y2 - y1) * (y2 - y1);
	
	float distCalc = sqrt(distX + distY);

	return distCalc;
}

//seeds the rng with a given int and uses it for the rng
void seedRng(int seed)
{
	return srand(seed);
}

//returns a random number between 1 and 100
int rng()
{
	return (rand() % 100 + 1);
}

//returns a random number based on a range
int rngRange(int range)
{
	return (rand() % range + 1);
}

//returns an rng boolean
bool rngb()
{
	return (rand() % 2);

}

//takes a number as range, returns the randomly generated bool
bool rngbChance(int range)
{
	int comp = (rand() % 100 + 1);

	if (comp <= range)
	{
		return true;
	}
	else
	{
		return false;
	}
}