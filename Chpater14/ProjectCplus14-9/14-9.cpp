#include<iostream>
#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"

using namespace std;

int main(void) 
{
	human Human;
	elf Elf;
	cyberdemon Cyberdemon;
	balrog Balrog;

	int howMany = 4, i, j;
	int* hitPoint = new int[howMany], *strength = new int[howMany], * attackTimes = new int[howMany], * totalDamage = new int[howMany];;

	cout << "Enter the hit point for human, elf, cyberdemon, and balrog: ";
	for (i = 0; i < howMany; i++) 
	{
		cin >> hitPoint[i];

		switch (i)
		{
		case 0:
			Human.setHitPoint(hitPoint[i]);
			break;
		case 1:
			Elf.setHitPoint(hitPoint[i]);
			break;
		case 2:
			Cyberdemon.setHitPoint(hitPoint[i]);
			break;
		case 3:
			Balrog.setHitPoint(hitPoint[i]);
			break;
		default:
			break;
		}
	}

	cout << "Enter the strength for human, elf, cyberdemon, and balrog: ";
	for (i = 0; i < howMany; i++) 
	{
		cin >> strength[i];

		switch (i)
		{
		case 0:
			Human.setStrength(strength[i]);
			break;
		case 1:
			Elf.setStrength(strength[i]);
			break;
		case 2:
			Cyberdemon.setStrength(strength[i]);
			break;
		case 3:
			Balrog.setStrength(strength[i]);
			break;
		default:
			break;
		}
	}

	cout << "Enter attack times for human, elf, cyberdemon, and balrog: ";
	for (i = 0; i < howMany; i++)
	{
		cin >> attackTimes[i];
		totalDamage[i] = 0;
	}

	cout << "\n";
	for (i = 0; i < howMany; i++) 
	{
		switch (i)
		{
		case 0:
			Human.setType(i);
			cout << "Human Part:\nStrength: " << Human.getStrength() << "\nHP: " << Human.getHitPoint() << "\nAttack result:\n";
			for (j = 0; j < attackTimes[i]; j++)
			{
				totalDamage[i] += Human.getDamage();
			}
			cout << "Total damage is: " << totalDamage[i] << "\n\n";
			break;
		case 1:
			Elf.setType(i);
			cout << "Elf Part:\nStrength: " << Elf.getStrength() << "\nHP: " << Elf.getHitPoint() << "\nAttack result:\n";
			for (j = 0; j < attackTimes[i]; j++)
			{
				totalDamage[i] += Elf.getDamage();
			}
			cout << "Total damage is: " << totalDamage[i] << "\n\n";
			break;
		case 2:
			Cyberdemon.setType(i);
			Cyberdemon.setSpeice(0);
			cout << "Cyberdemon Part:\nStrength: " << Cyberdemon.getStrength() << "\nHP: " << Cyberdemon.getHitPoint() << "\nAttack result:\n";
			for (j = 0; j < attackTimes[i]; j++)
			{
				totalDamage[i] += Cyberdemon.getDamage();
			}
			cout << "Total damage is: " << totalDamage[i] << "\n\n";
			break;
		case 3:
			Balrog.setType(2);
			Balrog.setSpeice(1);
			cout << "Balrog Part:\n" << Balrog.getStrength() << "\nHP: " << Balrog.getHitPoint() << "\nAttack result:\n";
			for (j = 0; j < attackTimes[i]; j++)
			{
				totalDamage[i] += Balrog.getDamage();
			}
			cout << "Total damage is: " << totalDamage[i] << "\n\n";
			break;
		default:
			break;
		}
	}

	delete[] hitPoint;
	delete[] strength;
	delete[] attackTimes;
	delete[] totalDamage;
	hitPoint = NULL;
	strength = NULL;
	attackTimes = NULL;
	totalDamage = NULL;

	system("pause");
	return 0;
}