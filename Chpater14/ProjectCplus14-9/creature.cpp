#include "creature.h"

creature::creature() 
{
	race = 0;
}

void creature::setType(int typ)
{
	race = typ;
}

int creature::getType(void) const
{
	return race;
}

int creature::getDamage(int strength, int speice) const
{
	int damage = rand() % strength + 1;

	switch (getType())
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