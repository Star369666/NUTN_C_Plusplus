#include <iostream>
using namespace std;

int main(void) 
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	int printNumber, i ,j, k = -1, check = 0;
	int primeArray[50];

	cout << "Prime numbers which lower or equal to 100:\n\n";

	for (j = 1; j <= 100; j++)
	{
		if (j == 2)
		{
			check = 1;
		}
		for (i = 2; i < j; i++)
		{
			if (j == 1) 
			{
				check = 0;
				break;
			}
			if ((j % i) == 0) 
			{
				check = 0;
				break;
			}
			else 
			{
				check = 1;
			}
		}
		if (check == 1) 
		{
			k++;
			primeArray[k] = i;
		}
	}

	for (i = 0; i <= k; i++) 
	{
		if (i < k) 
		{
			cout << primeArray[i] << ", ";
		}
		else if (i == k) 
		{
			cout << primeArray[i] << ".\n";
		}
	}

	cout << "\n";
	system("pause");
	return 0;
}