#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"

void battleArena(creature&, creature&);

int main(void) 
{
	creature c1, c2;
	int race1, race2, speice1, speice2, choose;

	do
	{
		cout << "Choose two creature to battle(0 - 2 to choose either human, elf, or demon): ";
		cin >> race1 >> race2;

		if (race1 == 2)
		{
			cout << "Choose what is the demon is(0 for cyberdemon or 1 for balrog): ";
			cin >> speice1;
			cout << "\n";
		}
		else
		{
			cout << "\n";
			speice1 = 0;
		}

		if (race2 == 2)
		{
			cout << "Choose what is the demon is(0 for cyberdemon or 1 for balrog): ";
			cin >> speice2;
			cout << "\n";
		}
		else
		{
			if (race1 == 2) 
			{
				cout << "\n";
			}
			speice2 = 0;
		}

		c1.setRace(race1);
		c2.setRace(race2);
		c1.setSpeice(speice1);
		c2.setSpeice(speice2);

		battleArena(c1, c2);
		
		cout << "Enter 0 to do again, or enter 1 to quit: ";
		cin >> choose;
	} while (choose == 0);

	system("pause");
	return 0;
}

void battleArena(creature& creature1, creature& creature2) 
{
	int stop = 0, damage1, damage2, hp1, hp2, str1, str2;

	/*Same fight*/
	if ((creature1.getRace() == creature2.getRace()) && (creature1.getSepice() == creature2.getSepice())) 
	{
		cout << "Invalid!, they can't fight with the same speice.\n";
	}
	/*human vs elf*/
	else if ((creature1.getRace() == 0 && creature2.getRace() == 1) || (creature1.getRace() == 1 && creature2.getRace() == 0))
	{
		human H;
		elf E;
		int round = 1;
		cout << "Chose " << H.getSpeice() << " and " << E.getSpeice() << " to fight: \n";
		cout << "Enter both of their hit point: ";
		cin >> hp1 >> hp2;
		cout << "Enter both of their strength: ";
		cin >> str1 >> str2;
		H.setHitPoint(hp1);
		E.setHitPoint(hp2);
		H.setStrength(str1);
		E.setStrength(str2);

		do
		{
			cout << "\nRound " << round << " battle:\n";

			damage1 = H.getDamage();
			damage2 = E.getDamage();
			E.setHitPoint(E.getHitPoint() - damage1);
			H.setHitPoint(H.getHitPoint() - damage2);

			cout << "Elf left " << E.getHitPoint() << "hp.\n";
			cout << H.getSpeice() << " left " << H.getHitPoint() << "hp.\n";

			if (H.getHitPoint() <= 0 && E.getHitPoint() > 0)
			{
				cout << "Elf winned.\n\n";
				stop = 1;
			}
			else if (H.getHitPoint() > 0 && E.getHitPoint() <= 0)
			{
				cout << "Human winned.\n\n";
				stop = 1;
			}
			else if (H.getHitPoint() <= 0 && E.getHitPoint() <= 0)
			{
				cout << "This is tie.\n\n";
				stop = 1;
			}
			else
			{
				round++;
			}
		} while (stop == 0);
	}
	/*human vs cyber*/
	else if((creature1.getRace() == 0 && creature2.getRace() == 2 && creature2.getSepice() == 0) || (creature2.getRace() == 0 && creature1.getRace() == 2 && creature1.getSepice() == 0))
	{
		human H;
		cyberdemon C;
		int round = 1;
		cout << "Chose " << H.getSpeice() << " and " << C.getSpeice() << " to fight: \n";
		cout << "Enter both of their hit point: ";
		cin >> hp1 >> hp2;
		cout << "Enter both of their strength: ";
		cin >> str1 >> str2;
		H.setHitPoint(hp1);
		C.setHitPoint(hp2);
		H.setStrength(str1);
		C.setStrength(str2);

		do
		{
			cout << "\nRound " << round << " battle:\n";

			damage1 = H.getDamage();
			damage2 = C.getDamage();
			C.setHitPoint(C.getHitPoint() - damage1);
			H.setHitPoint(H.getHitPoint() - damage2);

			cout << "Cyberdemon left " << C.getHitPoint() << "hp.\n";
			cout << "Human left " << H.getHitPoint() << "hp.\n";

			if (H.getHitPoint() <= 0 && C.getHitPoint() > 0)
			{
				cout << "Cyberdemon winned.\n\n";
				stop = 1;
			}
			else if (H.getHitPoint() > 0 && C.getHitPoint() <= 0)
			{
				cout << "Human winned.\n\n";
				stop = 1;
			}
			else if (H.getHitPoint() <= 0 && C.getHitPoint() <= 0)
			{
				cout << "This is tie.\n\n";
				stop = 1;
			}
			else
			{
				round++;
			}
		} while (stop == 0);
	}
	/*human vs balrog*/
	else if ((creature1.getRace() == 0 && creature2.getRace() == 2 && creature2.getSepice() == 1) || (creature2.getRace() == 0 && creature1.getRace() == 2 && creature1.getSepice() == 1)) 
	{
		human H;
		balrog B;
		int round = 1;
		cout << "Chose " << H.getSpeice() << " and " << B.getSpeice() << " to fight: \n";
		cout << "Enter both of their hit point: ";
		cin >> hp1 >> hp2;
		cout << "Enter both of their strength: ";
		cin >> str1 >> str2;
		H.setHitPoint(hp1);
		B.setHitPoint(hp2);
		H.setStrength(str1);
		B.setStrength(str2);

		do
		{
			cout << "\nRound " << round << " battle:\n";

			damage1 = H.getDamage();
			damage2 = B.getDamage();
			B.setHitPoint(B.getHitPoint() - damage1);
			H.setHitPoint(H.getHitPoint() - damage2);

			cout << "Balrog left " << B.getHitPoint() << "hp.\n";
			cout << "Human left " << H.getHitPoint() << "hp.\n";

			if (H.getHitPoint() <= 0 && B.getHitPoint() > 0)
			{
				cout << "Balrog winned.\n\n";
				stop = 1;
			}
			else if (H.getHitPoint() > 0 && B.getHitPoint() <= 0)
			{
				cout << "Human winned.\n\n";
				stop = 1;
			}
			else if (H.getHitPoint() <= 0 && B.getHitPoint() <= 0)
			{
				cout << "This is tie.\n\n";
				stop = 1;
			}
			else
			{
				round++;
			}
		} while (stop == 0);
	}
	/*elf vs cyber*/
	else if ((creature1.getRace() == 1 && creature2.getRace() == 2 && creature2.getSepice() == 0) || (creature2.getRace() == 1 && creature1.getRace() == 2 && creature1.getSepice() == 0))
	{
		elf E;
		cyberdemon C;
		int round = 1;
		cout << "Chose " << E.getSpeice() << " and " << C.getSpeice() << " to fight: \n";
		cout << "Enter both of their hit point: ";
		cin >> hp1 >> hp2;
		cout << "Enter both of their strength: ";
		cin >> str1 >> str2;
		E.setHitPoint(hp1);
		C.setHitPoint(hp2);
		E.setStrength(str1);
		C.setStrength(str2);

		do
		{
			cout << "\nRound " << round << " battle:\n";

			damage1 = E.getDamage();
			damage2 = C.getDamage();
			E.setHitPoint(E.getHitPoint() - damage1);
			C.setHitPoint(C.getHitPoint() - damage2);

			cout << "Cyberdemon left " << C.getHitPoint() << "hp.\n";
			cout << "Elf left " << E.getHitPoint() << "hp.\n";

			if (E.getHitPoint() <= 0 && C.getHitPoint() > 0)
			{
				cout << "Cyberdemon winned.\n\n";
				stop = 1;
			}
			else if (E.getHitPoint() > 0 && C.getHitPoint() <= 0)
			{
				cout << "Elf winned.\n\n";
				stop = 1;
			}
			else if (E.getHitPoint() <= 0 && C.getHitPoint() <= 0)
			{
				cout << "This is tie.\n\n";
				stop = 1;
			}
			else
			{
				round++;
			}
		} while (stop == 0);
	}
	/*elf vs balrog*/
	else if ((creature1.getRace() == 1 && creature2.getRace() == 2 && creature2.getSepice() == 1) || (creature2.getRace() == 1 && creature1.getRace() == 2 && creature1.getSepice() == 1))
	{
		elf E;
		balrog B;
		int round = 1;
		cout << "Chose " << E.getSpeice() << " and " << B.getSpeice() << " to fight: \n";
		cout << "Enter both of their hit point: ";
		cin >> hp1 >> hp2;
		cout << "Enter both of their strength: ";
		cin >> str1 >> str2;
		E.setHitPoint(hp1);
		B.setHitPoint(hp2);
		E.setStrength(str1);
		B.setStrength(str2);

		do
		{
			cout << "\nRound " << round << " battle:\n";

			damage1 = E.getDamage();
			damage2 = B.getDamage();
			E.setHitPoint(E.getHitPoint() - damage1);
			B.setHitPoint(B.getHitPoint() - damage2);

			cout << "Balrog left " << B.getHitPoint() << "hp.\n";
			cout << "Elf left " << E.getHitPoint() << "hp.\n";

			if (E.getHitPoint() <= 0 && B.getHitPoint() > 0)
			{
				cout << "Cyberdemon winned.\n\n";
				stop = 1;
			}
			else if (E.getHitPoint() > 0 && B.getHitPoint() <= 0)
			{
				cout << "Elf winned.\n\n";
				stop = 1;
			}
			else if (E.getHitPoint() <= 0 && B.getHitPoint() <= 0)
			{
				cout << "This is tie.\n\n";
				stop = 1;
			}
			else
			{
				round++;
			}
		} while (stop == 0);
	}
	/*cyber vs balrog*/
	else if ((creature1.getRace() == 1 && creature2.getRace() == 2 && creature2.getSepice() == 1) || (creature2.getRace() == 1 && creature1.getRace() == 2 && creature1.getSepice() == 1))
	{
		cyberdemon C;
		balrog B;
		int round = 1;
		cout << "Chose " << C.getSpeice() << " and " << B.getSpeice() << " to fight: \n";
		cout << "Enter both of their hit point: ";
		cin >> hp1 >> hp2;
		cout << "Enter both of their strength: ";
		cin >> str1 >> str2;
		C.setHitPoint(hp1);
		B.setHitPoint(hp2);
		C.setStrength(str1);
		B.setStrength(str2);

		do
		{
			cout << "\nRound " << round << " battle:\n";

			damage1 = C.getDamage();
			damage2 = B.getDamage();
			C.setHitPoint(C.getHitPoint() - damage1);
			B.setHitPoint(B.getHitPoint() - damage2);

			cout << "Balrog left " << B.getHitPoint() << "hp.\n";
			cout << "Cyberdemon left " << C.getHitPoint() << "hp.\n";

			if (B.getHitPoint() <= 0 && C.getHitPoint() > 0)
			{
				cout << "Cyberdemon winned.\n\n";
				stop = 1;
			}
			else if (C.getHitPoint() > 0 && B.getHitPoint() <= 0)
			{
				cout << "Cyberdemon winned.\n\n";
				stop = 1;
			}
			else if (C.getHitPoint() <= 0 && B.getHitPoint() <= 0)
			{
				cout << "This is tie.\n\n";
				stop = 1;
			}
			else
			{
				round++;
			}
		} while (stop == 0);
	}
}