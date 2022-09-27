#include <iostream>
using namespace std;

int main(void) 
{
	int COUNT = 6;
	int inputScore[100];
	int inputNumber, index, i;
	int countArray[6] = { 0, 0, 0, 0, 0, 0 };

	cout << "Enter the total scores needed to enter: ";
	cin >> inputNumber;
	cout << "Enter the scores from 1 to 5(If you want to input all of scores just one enter, please use blank to distinguish each of them.) >> ";

	for (i = 0; i < inputNumber; i++) 
	{
		cin >> inputScore[i];
		index = inputScore[i];
		countArray[index]++;
	}

	cout << "\n";

	for (i = 0; i < COUNT; i++)
	{
		cout << countArray[i] << " grade(s) of " << i << "\n";
		countArray[i] = 0;
	}

	cout << "\n";
	system("pause");
	return 0;
}