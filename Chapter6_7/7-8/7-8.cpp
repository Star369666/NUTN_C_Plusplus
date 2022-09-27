#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>, int, int);
void sort(vector<int>&, int, int);
void swap(int&, int&);

int main(void) 
{
	srand(time(NULL));

	vector<int> grade, countGrade;
	int howManyStudents = 0, next, maximum, count = 0, i, j;

	cout << "Enter all the grades for the students, and typing -1 for quitting the loop: ";
	cin >> next;

	while (next != -1) 
	{
		howManyStudents++;

		grade.push_back(next);
		cin >> next;
	}

	maximum = grade[0];
	//cout << "\nBefore the sort:\n";
	for (next = 0; next < howManyStudents; next++) 
	{
		if (maximum < grade[next]) 
		{
			maximum = grade[next];
		}
		//cout << grade[next] << "\n";
	}

	sort(grade, 0, howManyStudents);

	/*cout << "\nAfter the sort:\n";
	for (unsigned next = 0; next < grade.size(); next++)
	{
		cout << grade[next] << "\n";
	}*/

	for (i = 0; i <= maximum; i++) 
	{
		count = 0;
		
		for (j = 0; j < howManyStudents; j++) 
		{
			if (grade[j] == i) 
			{
				count++;
			}
		}

		countGrade.push_back(count);
	}

	cout << "\nResult:\n";
	cout << "The Maximum is " << maximum << "\n";
	for (i = 0; i <= maximum; i++) 
	{
		cout << countGrade[i] << " grade(s) of " << i << ": ";
		
		for (j = 0; j < countGrade[i]; j++) 
		{
			cout << "*";
		}

		cout << "\n";
	}

	cout << "\n";
	system("pause");
	return 0;
}

int findMin(vector<int> grade, int start, int end) 
{
	int index = start;
	
	for (start; start < end; start++) 
	{
		if (grade[index] > grade[start])
		{
			index = start;
		}
	}

	return index;
}

void sort(vector<int>& grade, int start, int end) 
{
	int minIndex;

	for (start; start < end - 1; start++) 
	{
		minIndex = findMin(grade, start, end);

		if (grade[minIndex] != grade[start]) 
		{
			swap(grade[minIndex], grade[start]);
		}
	}
}

void swap(int& a, int& b) 
{
	int temperary;

	temperary = a;
	a = b;
	b = temperary;
}