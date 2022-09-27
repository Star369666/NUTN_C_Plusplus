#include "creature.h"

creature::creature()
{
	race = 0;
	speice = 0;
}

void creature::setRace(int typ)
{
	race = typ;
}

int creature::getRace(void) const
{
	return race;
}

int creature::getDamage(int strength, int speice) const
{
	int damage = rand() % strength + 1;

	switch (getRace())
	{
	case 0:
		cout << "Human";
		break;
	case 1:
		cout << "Elf";
		break;
	case 2:
		switch (speice)
		{
		case 0:
			cout << "Cyberdemon";
			break;
		case 1:
			cout << "Balrog";
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}

	cout << " attacks for " << damage << " points!" << endl;

	return damage;
}

void creature::setSpeice(int a)
{
	speice = a;
}

int creature::getSepice() const 
{
	return speice;
}