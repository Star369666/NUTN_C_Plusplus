#include "human.h"

human::human()
{
	strength = 10;
	hitPoint = 10;
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
	return creature::getDamage(strength, 0);
}