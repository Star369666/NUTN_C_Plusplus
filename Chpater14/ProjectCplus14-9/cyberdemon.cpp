#include "cyberdemon.h"

cyberdemon::cyberdemon() 
{
	strength = 0;
	hitPoint = 0;
}

void cyberdemon::setStrength(int str)
{
	strength = str;
}

void cyberdemon::setHitPoint(int hp)
{
	hitPoint = hp;
}

int cyberdemon::getStrength(void) const
{
	return strength;
}

int cyberdemon::getHitPoint(void) const
{
	return hitPoint;
}

int cyberdemon::getDamage(void) const
{
	int damage = 0;

	damage += creature::getDamage(strength, getSpeice());

	damage += demon::getDamage();

	return damage;
}