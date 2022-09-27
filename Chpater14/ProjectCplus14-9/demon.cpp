#include "demon.h"

demon::demon() 
{
	speice = 0;
}

void demon::setSpeice(int speic)
{
	speice = speic;
}

int demon::getSpeice(void) const
{
	return speice;
}

int demon::getDamage(void) const
{
	int damage = 0;

	if (rand() % 100 < 5)
	{
		damage = damage + 50;

		cout << "Demonic attack inflicts 50 additional damage points!" << endl;
	}

	return damage;
}