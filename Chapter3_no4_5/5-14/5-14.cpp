#include <iostream>
using namespace std;
#include <cmath>

int main(void) 
{
	int viewArray[5][7] = { {0, 100, 101, 102, 103, 104, 105},
							{0, 3, 1, 5, 2, 1, 5}, 
							{1, 4, 2, 1, 4, 2, 4},		
							{2, 3, 1, 2, 4, 4, 1}, 
							{3, 5, 1, 4, 2, 4, 2} };
	int mathchIndex = 0;
	int movieNumber[3], index[3], point[3], i , j, k = 0, sum = 0;
	double comparePoint[4];

	cout << "Enter the moives which are numbered 100 to 105 numbers(Distinguish by using blank): ";
	for (i = 0; i < 3; i++)
	{
		cin >> movieNumber[i];

		if (movieNumber[i] == 100) 
		{
			index[i] = 1;
		}
		else if (movieNumber[i] == 101) 
		{
			index[i] = 2;
		}
		else if (movieNumber[i] == 102)
		{
			index[i] = 3;
		}
		else if (movieNumber[i] == 103)
		{
			index[i] = 4;
		}
		else if (movieNumber[i] == 104)
		{
			index[i] = 5;
		}
		else if (movieNumber[i] == 105)
		{
			index[i] = 6;
		}
	}
	cout << "Enter the ratings from 1 to 5 for the three moives you chose(Distinguish by blank): ";
	for (i = 0; i < 3; i++) 
	{
		cin >> point[i];
	}

	for (i = 1; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum = sum + pow((point[j] - viewArray[i][index[j]]), 2);
		}
		comparePoint[k] = sqrt((double)sum);
		k++;
	}

	for (i = 0; i < 4; i++)
	{
		if (comparePoint[mathchIndex] > comparePoint[i]) 
		{
			mathchIndex = i;
		}
	}

	cout << "\n";
	for (i = 1; i < 7; i++) 
	{
		j = 0;
		if (viewArray[j][i] != movieNumber[j] && viewArray[j][i] != movieNumber[j + 1] && viewArray[j][i] != movieNumber[j + 2])
		{
			cout << "Predict " << viewArray[0][i] << " is " << viewArray[mathchIndex + 1][i] << "\n";
		}
	}
	
	cout << "\n";
	system("pause");
	return 0;
}