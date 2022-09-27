#include "Dice.h"

Dice::Dice()
{
	numSides = 6;
	srand(time(NULL));
}
Dice::Dice(int numSides)
{
	this->numSides = numSides;
	srand(time(NULL));
}
int Dice::rollDice()const
{
	return (rand() % numSides) + 1;
}

int rollTwoDice(const Dice& die1, const Dice& die2)
{
	return die1.rollDice() + die2.rollDice();
}