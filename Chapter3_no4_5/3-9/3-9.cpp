#include <iostream>
using namespace std;
#include <stdlib.h>
#include <ctime>

int diceRoll();

int main(void)
{
	srand(time(NULL));
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	int pointSum, pointCheck, stopCheck;
	int i, winCount = 0, loseCount = 0;
	float probability;

	for (i = 1; i < 10001; i++)
	{
		pointSum = diceRoll();

		if (pointSum == 7 || pointSum == 11)
		{
			winCount++;
		}
		else if (pointSum == 2 || pointSum == 3 || pointSum == 12)
		{
			loseCount++;
		}
		else if (pointSum == 4 || pointSum == 5 || pointSum == 6 || pointSum == 8 || pointSum == 9 || pointSum == 10)
		{
			stopCheck = 0;
			pointCheck = pointSum;

			do
			{
				pointSum = diceRoll();

				if (pointSum == 7)
				{
					loseCount++;
					stopCheck = 1;
				}
				else if (pointSum == pointCheck)
				{
					winCount++;
					stopCheck = 1;
				}

			} while (stopCheck != 1);
		}
	}

	probability = (float)winCount / (winCount + loseCount);

	cout << "Result:\nWin: " << winCount << "      \nLose: " << loseCount << "\n\n";
	cout << "The probability of winning is about: " << probability << "\n\n";

	system("pause");
	return 0;
}

int diceRoll()
{
	int point1, point2, sum;

	point1 = rand() % 6 + 1;
	point2 = rand() % 6 + 1;

	sum = point1 + point2;

	return sum;
}