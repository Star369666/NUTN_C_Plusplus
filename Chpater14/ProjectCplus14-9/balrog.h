#ifndef BALROG_H
#define BALROG_H

#include "demon.h"

class balrog: public demon
{
public:
	balrog();
	void setStrength(int);
	void setHitPoint(int);
	int getStrength(void) const;
	int getHitPoint(void) const;
	virtual int getDamage(void) const;
private:
	int strength;
	int hitPoint;
};

#endif
