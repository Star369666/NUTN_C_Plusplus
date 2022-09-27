#include "cyberdemon.h"

cyberdemon::cyberdemon() 
{
	strength = 0;
	hitPoint = 0;
	setSpeice(0);
	setRace(2);
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
	int damage = rand() % strength + 1;

	cout << " Cyberdemon attacks for " << damage << " points!" << endl;

	damage += demon::getDamage();

	return damage;
}

string cyberdemon::getSpeice(void) const 
{
	return "Cyberdemon";
}