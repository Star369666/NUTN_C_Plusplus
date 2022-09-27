#include <iostream>
using namespace std;

int main(void) 
{
	int rollNumber, i, j, check;
	int	PIN[5], newPIN[5], randomPIN[10], userInputPIN[5];
	
	srand(time(NULL));

	cout << "Enter the PIN that is consisted of 1 to 9 numbers from 00000 to 99999(Use blank to distinguish each of them): ";
	
	for (i = 0; i < 5; i++)
	{ 
		cin >> PIN[i];
	}
	
	do
	{
		check = 0;
		cout << "PIN: 0 1 2 3 4 5 6 7 8 9\nNUM:";

		for (i = 0; i < 10; i++)
		{
			randomPIN[i] = rand() % 3 + 1;
			cout << " " << randomPIN[i];
		}
		cout << "\n";
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (PIN[i] == j)
				{
					newPIN[i] = randomPIN[j];
				}
			}
		}
		
		cout << "Enter the encrypted numbers for the true PIN(Use blank to distinguish each of them): ";
		
		for (i = 0; i < 5; i++)
		{
			cin >> userInputPIN[i];
		}

		for (i = 0; i < 5; i++)
		{
			if (userInputPIN[i] == newPIN[i]) 
			{
				check = 1;
			}
			else 
			{
				check = 0;
				break;
			}
		}
		if (check == 0) 
		{
			cout << "Error PIN entered!\n\n";
		}
		else 
		{
			cout << "Correct PIN entered!\n\n";
		}
	} while (check == 0);

	system("pause");
	return 0;
}