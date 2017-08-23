#pragma once


struct piggybank
{
	int oneDollars;
	int twoDollars;
	int fiveDollars;

	float quarters;
	float dimes;
	float nickels;
	float pennies;
};

//returns the total monetary value of all dollar bills
float calcPiggybankNotes(piggybank piggy);

//returns coins
float calcPiggybankCoins(piggybank piggy);

//returns total
float calcPiggybankTotal(piggybank piggy);