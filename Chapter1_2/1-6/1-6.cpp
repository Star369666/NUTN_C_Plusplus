#include <iostream>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	float distance, time;
	float distanceMoney = 0, timeMoney = 0, totalMoney;

	cout << "Enter how long the distance(kilometer) is: ";
	cin >> distance;

	if (distance <= 0)
	{
		do
		{
			cout << "\nDistance must larger than 0! Please enter again: ";
			cin >> distance;
		} while (distance < 0);
	}

	cout << "\nEnter how much time(minute) it goes: ";
	cin >> time;

	if (time <= 0)
	{
		do
		{
			cout << "\nTime must > 0! Please enter again: ";
			cin >> time;
		} while (time < 0);
	}

	if (distance <= 2)
	{
		distanceMoney = 2.0;
	}
	else if (2 < distance && distance <= 8)
	{
		distanceMoney = 2.0 + (distance - 2) * 0.50;
	}
	else if (distance > 8)
	{
		distanceMoney = 2.0 + 6 * 0.50 + (distance - 8) * 1.0;
	}

	timeMoney = time * 0.2;
	totalMoney = timeMoney + distanceMoney;

	cout << "\nDistance: " << distance << " kilometers\nTime: " << time << " minutes\nCharges: " << totalMoney << " dollars";

	cout << "\n\n";
	system("Pause");
	return 0;
}