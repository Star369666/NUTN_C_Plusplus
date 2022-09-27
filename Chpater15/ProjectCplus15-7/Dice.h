#ifndef DICE_H
#define DICE_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Dice
{
public:
	Dice();
	Dice(int numSides);
	virtual int rollDice()const;
protected:
	int numSides;
};

#endif

