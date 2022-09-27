#ifndef ELF_H
#define ELF_H

#include "creature.h"

class elf: public creature
{
public:
	elf();
	void setStrength(int);
	void setHitPoint(int);
	int getStrength(void) const;
	int getHitPoint(void) const;
	virtual int getDamage(void) const;
	string getSpeice(void) const;
private:
	int strength;
	int hitPoint;
};

#endif