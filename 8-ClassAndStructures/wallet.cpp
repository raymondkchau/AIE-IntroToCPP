#include "wallet.h"

//returns the total monetary value of all dollar bills
float calcPiggybankNotes(piggybank piggy)
{
	piggy.twoDollars *= 2;
	piggy.fiveDollars *= 5;

	return (piggy.oneDollars + piggy.twoDollars + piggy.fiveDollars);
}

//returns coins
float calcPiggybankCoins(piggybank piggy)
{
	piggy.quarters /= 4;
	piggy.dimes /= 10;
	piggy.nickels /= 20;
	piggy.pennies /= 100;

	return (piggy.quarters + piggy.dimes + piggy.nickels + piggy.pennies);
}

//returns total
float calcPiggybankTotal(piggybank piggy)
{
	piggybank totalpiggy = piggy;
	float total = calcPiggybankCoins(totalpiggy) + calcPiggybankNotes(totalpiggy);

	return total;
}