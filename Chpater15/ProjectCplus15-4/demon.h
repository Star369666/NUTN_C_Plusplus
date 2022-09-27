#ifndef DEMON_H
#define DEMON_H

#include "creature.h" 

class demon: public creature
{
public:
	demon();
	void setSpeice(int);
	int getSpeice(void) const;
	virtual int getDamage(void) const;
private:
	int speice;
};

#endif
