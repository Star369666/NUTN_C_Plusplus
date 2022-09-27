#include "elf.h"

elf::elf() 
{
	strength = 0;
	hitPoint = 0;
	setSpeice(0);
	setRace(1);
}

void elf::setStrength(int str) 
{
	strength = str;
}

void elf::setHitPoint(int hp)
{
	hitPoint = hp;
}

int elf::getStrength(void) const
{
	return strength;
}

int elf::getHitPoint(void) const
{
	return hitPoint;
}

int elf::getDamage(void) const
{
	int damage = rand() % strength + 1;

	cout << "Elf attacks for " << damage << " points!" << endl;

	if ((rand() % 10) == 0)
	{
		cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;

		damage = damage * 2;
	}

	return damage;
}

string elf::getSpeice(void) const 
{
	return "Elf";
}