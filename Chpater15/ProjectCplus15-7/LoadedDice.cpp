#include "LoadedDice.h"

LoadedDice::LoadedDice() {}

LoadedDice::LoadedDice(int num)
{
	numSides = num;
}

int LoadedDice::rollDice() const
{
	int halfPrecent, roll;

	if ((rand() % 100) < 50) 
	{
		//cout << "50% got it!\n";
		return numSides;
	}
	else 
	{
		return ((rand() % numSides) + 1);
	}
}