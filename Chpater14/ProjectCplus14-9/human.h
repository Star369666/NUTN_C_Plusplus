#ifndef HUMAN_H
#define HUMAN_H

#include "creature.h"

class human: public creature
{
public:
	human();
	void setStrength(int);
	void setHitPoint(int);
	int getStrength(void) const;
	int getHitPoint(void) const;
	int getDamage(void) const;
private:
	int strength;
	int hitPoint;
};

#endif
