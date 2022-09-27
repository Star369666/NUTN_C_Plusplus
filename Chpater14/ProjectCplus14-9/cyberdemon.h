#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "demon.h"

class cyberdemon: public demon
{
public:
	cyberdemon();
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
