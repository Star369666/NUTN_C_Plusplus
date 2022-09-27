#ifndef LOADEDDICE_H
#define LOADEDDICE_H

#include "Dice.h"

class LoadedDice : public Dice
{
public:
	LoadedDice();
	LoadedDice(int);
	virtual int rollDice() const;
};

#endif