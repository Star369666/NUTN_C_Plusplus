#include <iostream>
#include <fstream>
using namespace std;

int findMin(int[], int, int);
void sort(int[], int, int);
void swap(int&, int&);
int binary(int[], int, int, int);

int main(void)
{
	srand(time(NULL));
	ofstream output;
	output.open("output.txt");

	int a[10];
	int i, target;
	int end = 10;

	cout << "The before:\n";
	for (i = 0; i < end; i++)
	{
		a[i] = rand() % 30 + 1;
		cout << a[i] << "\n";
		output << a[i] << "\n";
	}

	sort(a, 0, end);
	output << "\n\n";

	cout << "\nThe after:\n";
	for (i = 0; i < end; i++)
	{
		cout << a[i] << "\n";
		output << a[i] << "\n";
	}

	cout << "\n\nTarget: ";
	cin >> target;
	cout << "The target " << target << "'s index is " << binary(a, 0, end - 1, target);

	cout << "\n\n";
	system("pause");
	return 0;
}

int findMin(int a[], int start, int end)
{
	int index = start;

	for (start; start < end; start++)
	{
		if (a[index] > a[start])
		{
			index = start;
		}
	}

	return index;
}

void sort(int a[], int start, int end)
{
	int index;

	for (start; start < end - 1; start++)
	{
		index = findMin(a, start, end);

		if (a[index] != a[start])
		{
			swap(a[index], a[start]);
		}
		else
		{
			continue;
		}
	}
}

void swap(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;

}

int binary(int a[], int start, int end, int target)
{
	int mid;

	do
	{
		mid = (start + end) / 2;

		if (a[mid] == target)
		{
			break;
		}
		else if (a[mid] > target)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	} while (start != end);

	return mid;
}