#include "human.h"

human::human()
{
	strength = 10;
	hitPoint = 10;
	setSpeice(0);
	setRace(0);
}

void human::setStrength(int inp) 
{
	strength = inp;
}

void human::setHitPoint(int inp)
{
	hitPoint = inp;
}

int human::getStrength(void) const 
{
	return strength;
}

int human::getHitPoint(void) const
{
	return hitPoint;
}

int human::getDamage(void) const 
{
	int damage = rand() % strength + 1;

	cout << "Human attacks for " << damage << " points!" << endl;

	return damage;
}

string human::getSpeice(void) const
{
	return "Human";
}