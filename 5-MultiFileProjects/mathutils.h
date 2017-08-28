#pragma once

//returns the lesser of the two
int min(int a, int b);

//returns the greater of the two
int max(int a, int b);

//returns a value clamped within a range
int clamp(int lower, int upper, int value);

//returns the distance between two points
float dist(float x1, float y1, float x2, float y2);

//seeds the rng with a given int and uses it for the rng
void seedRng(int seed);

//returns a random number between 1 and 100
int rng();

//returns a random number based on a range
int rngRange(int range);

//returns an rng boolean
bool rngb();

//takes a number as range, returns the randomly generated bool
bool rngbChance(int range);