#include "balrog.h"

balrog::balrog() 
{
	strength = 0;
	hitPoint = 0;
}

void balrog::setStrength(int str)
{
	strength = str;
}

void balrog::setHitPoint(int hp)
{
	hitPoint = hp;
}

int balrog::getStrength(void) const
{
	return strength;
}

int balrog::getHitPoint(void) const
{
	return hitPoint;
}

int balrog::getDamage(void) const
{
	int damage = 0, i;

	for (i = 0; i < 2; i++) 
	{
		damage += rand() % strength + 1;
		damage += demon::getDamage();
	}

	return damage;
}

string balrog::getSpeice(void) const 
{
	return "balrog";
}