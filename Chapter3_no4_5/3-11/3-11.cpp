#include <iostream>
using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);

int main(void)
{
	srand(time(NULL));

	char choose;
	int humanPoint, computerPoint;
	int humanSum = 0, computerSum = 0;
	int count = 1;
	int humanReturn = 0;

	do
	{
		cout << "The " << count << "th the game of Pig:\n";
		cout << "Player's point is: " << humanSum << "\nComputer's point is: " << computerSum << "\n";
		humanSum += humanTurn(humanSum);
		
		if (humanSum >= 100)
		{
			break;
		}

		computerSum = computerTurn(computerSum);
		if (computerSum >= 100)
		{
			break;
		}

		count++;
		cout << "\n-------------------------------------------------------------------------------------\n";
	} while (humanSum < 100 && computerSum < 100);

	cout << "\n\nResult:\nPlayer's point is: " << humanSum << "\nComputer's point is: " << computerSum << "\n";

	if (humanSum >= 100)
	{
		cout << "The Player is the winner!\n\n";
	}
	else if (computerSum >= 100)
	{
		cout << "The computer is the winner!\n\n";
	}

	system("pause");
	return 0;
}

int humanTurn(int humanTotalScore)
{
	int point, sumReturn = 0;
	char choose = ' ';

	do
	{
		point = rand() % 6 + 1;

		if (humanTotalScore + point >= 100)
		{
			sumReturn += point;
			return sumReturn;
		}
		if (point != 1)
		{
			cout << "Point right now is(Sum + Point): " << humanTotalScore << " + " << point << " = ";
			humanTotalScore += point;
			sumReturn += point;
			cout << humanTotalScore << "\n";
		}
		else
		{
			cout << "The point rolled got 1, so that there is no point for player in this round." << "\n";
			sumReturn = 0;
			break;
		}
		cout << "Enter 'r' to keep rolling and 'h' to hold the point so far >> ";
		cin >> choose;
	} while (choose == 'r');

	return sumReturn;
}

int computerTurn(int computerTotalScore)
{
	int sum = 0, sumReturn, point;

	sumReturn = computerTotalScore;

	do
	{
		point = 0;
		point += rand() % 6 + 1;

		if (point != 1)
		{
			sum += point;
			if (sum >= 20)
			{
				break;
			}
		}
		else
		{
			sum = 0;
			break;
		}
	} while (sum < 20);

	sumReturn += sum;
	//cout << "Computer get: " << sum << "\n";
	//cout << "Computer point now is: " << sumReturn << "\n\n";

	return sumReturn;
}