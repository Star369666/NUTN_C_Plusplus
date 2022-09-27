#include <iostream>
using namespace std;

int main(void) 
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	float weight, MPH, MET, calories;
	int i, j, k, minute;

	cout << "Enter the weight: ";
	cin >> weight;

	if (weight <= 0)
	{
		do 
		{
			cout << "\nThe weight can't be lower than zero! Please enter the weight again: ";
			cin >> weight;
		} while (weight <= 0);
	}

	MPH = 4;
	minute = 3;
	j = 6;

	//3 -> 7 -> 11 -> 15
	//4 -> 6 -> 8 -> 10
	//3 * 4 + 4(7) * 6 + 4(11) * 8 + 4(15) * 10 

	for (i = 3; i <= 15; i = i + 4)
	{
		if (i == 3) 
		{
			MPH = MPH * minute;
		}
		else
		{
			MPH = MPH + j * 4;
			j += 2;
		}
	}

	//cout << MPH << "\n";

	MET = MPH / 6 * 10;

	calories = 0.0175 * MET * weight;

	cout << "\nThe calories burned by treadmill is " << calories << ".\n\n";

	system("pause");

	return 0;
}

