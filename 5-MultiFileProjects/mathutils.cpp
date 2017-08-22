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
