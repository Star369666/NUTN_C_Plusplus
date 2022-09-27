#include <iostream>
#include <vector>
using namespace std;

class MyInteger
{
public:
	MyInteger() {}
	void setInt(int);
	int getInt() const { return integer; }
	int& operator [](int) const;

private:
	int integer;
};

int main(void) 
{
	MyInteger myInteger;
	int inputNumber, index;
	int* intReturn;
	
	cout << "Enter the number to check: ";
	cin >> inputNumber;
	myInteger.setInt(inputNumber);

	do 
	{
		cout << "Enter the index to show the specific number(0~?, enter -1 to quit): ";
		cin >> index;
		
		if (index == -1) 
		{
			break;
		}

		cout << "The number is: " << myInteger[index] << "\n\n";
	} while (index != -1);
	
	system("pause");
	return 0;
}

void MyInteger::setInt(int inp) 
{
	integer = inp;
}

int& MyInteger::operator [](int i) const
{
	int result, rest, current, j = 0, k, iReturn;
	vector<int> intStore;

	result = getInt();

	while (int(result / pow(10, j)) != 0)
	{
		j++;
	}

	rest = result / pow(10, j - 1);
	intStore.push_back(rest);
	
	for (k = 1; k < j; k++) 
	{
		current = result / pow(10, j - 1 - k) - 10 * rest;
		intStore.push_back(current);
		rest = 10 * rest + current;
	}

	if (i >= j || i < 0)
	{
		k = -1;
		return k;
	}
	else 
	{
		iReturn = intStore[i];
		return iReturn;
	}
}