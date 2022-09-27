#include "LoadedDice.h"

int rollTwoDice(const Dice& die1, const Dice& die2);

int main(void) 
{
	int i, side1, side2;

	cout << "Enter the number of side(s) for two dice: ";
	cin >> side1 >> side2;
	Dice dice1(side1), dice2(side2);

	cout << "Dice result:\n";
	for (i = 0; i < 10; i++) 
	{
		cout << "The " << i + 1 << " times to roll two dices: " << rollTwoDice(dice1, dice2) << "\n";
	}

	cout << "\nEnter the number of side(s) for two dice: ";
	cin >> side1 >> side2;
	LoadedDice load1(side1), load2(side2);

	cout << "\nLoadedDice result:\n";
	for (i = 0; i < 10; i++) 
	{
		cout << "The " << i << " times to roll two dices: " << rollTwoDice(load1, load2) << "\n";
	}

	cout << "\n";
	system("pause");
	return 0;
}