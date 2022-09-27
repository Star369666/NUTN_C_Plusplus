#include <iostream>
#include <string>
using namespace std;

class Television 
{
public:
	Television() {}
	Television(string, double, string*);
	Television(const Television&);
	void setDisplayType(string);
	void setDimension(double);
	void setConnectivitySupport(string*);
	string getDisplayType() const { return displayType; }
	double getDimension() const { return dimension; }
	string* getConnectiveSupport() const { return connectivitySupport; }
private:
	string displayType;
	double dimension;
	string* connectivitySupport;
};

int main(void) 
{
	Television input;
	string displayType, *support, *showSupport;
	double dimension;
	int modeNumber, i, j, howMany, changeNumber, changeImformation;
	char check;

	cout << "Enter the display type: ";
	cin >> displayType;
	cout << "Enter the dimension: ";
	cin >> dimension;
	cout << "Enter how many connectivity modes supported by the television: ";
	cin >> modeNumber;
	cout << "Enter " << modeNumber << " modes' name:\n";

	input.setDisplayType(displayType);
	input.setDimension(dimension);
	support = new string[modeNumber];
	cin.ignore();

	for (i = 0; i < modeNumber; i++) 
	{
		getline(cin, support[i]);
	}

	input.setConnectivitySupport(support);
	
	cout << "\n";
	cout << "The input from the user:\nDisplay type: " << input.getDisplayType() << "\nDimension: " << input.getDimension() << "\nConnectivity support(s):\n";
	showSupport = input.getConnectiveSupport();

	for (i = 0; i < modeNumber; i++) 
	{
		cout << showSupport[i] << "\n";
	}

	cout << "\n";
	cout << "Enter how many television are there: ";
	cin >> howMany;

	Television *copy = new Television[howMany];
	int* modeArray = new int[howMany + 1];
	modeArray[0] = modeNumber;

	for (i = 0; i < howMany; i++) 
	{
		copy[i] = input;
		modeArray[i + 1] = modeNumber;
	}

	do 
	{
		cout << "Do you want to change any imformation of those television? Enter (Y/y) for yes or (N/n) for quit: ";
		cin >> check;
		
		if (check == 'y' || check == 'Y') 
		{
			cout << "Choose a television to start changing(1 to " << howMany << "): ";
			cin >> changeNumber;
			cout << "Enter 1 to 3 to choose what to change: 1 for display type, 2 for dimension, and 3 for connectivity support: ";
			cin >> changeImformation;

			switch (changeImformation)
			{
			case 1:
				cout << "Enter a new display type to change: ";
				cin >> displayType;
				cout << "\n";
				copy[changeNumber - 1].setDisplayType(displayType);
				break;
			case 2:
				cout << "Enter a new dimension to change: ";
				cin >> dimension;
				cout << "\n";
				copy[changeNumber - 1].setDimension(dimension);
				break;
			case 3:
				cout << "Enter how many the new connectivity support are: ";
				cin >> modeNumber;
				cin.ignore();

				cout << "Enter a new connectivity support to change:\n";
				support = new string[modeNumber];
				for (i = 0; i < modeNumber; i++) 
				{
					getline(cin, support[i]);
				}
				copy[changeNumber - 1].setConnectivitySupport(support);
				modeArray[changeNumber] = modeNumber;
				break;
			default:
				break;
			}
		}
		else 
		{
			break;
		}
	} while (check == 'Y' || check == 'y');

	cout << "\n";
	cout << "Result:\nThe original input:\nDisplay type: " << input.getDisplayType() << "\nDimension: " << input.getDimension() << "\nConnectivity support(s):\n";
	for (i = 0; i < modeArray[0]; i++) 
	{
		cout << showSupport[i] << "\n";
	}
	cout << "\n";

	for (i = 0; i < howMany; i++) 
	{
		cout << "Number " << i + 1 << " television:\nDisplay type: " << copy[i].getDisplayType() << "\nDimension: " << copy[i].getDimension() << "\nConnectivity support(s):\n";
		showSupport = copy[i].getConnectiveSupport();
		for (j = 0; j < modeArray[i + 1]; j++) 
		{
			cout << showSupport[j] << "\n";
		}
		cout << "\n";
	}

	delete[] support;	//string*
	delete[] copy;		//class*
	delete[] modeArray;	//int*
	support = NULL;
	copy = NULL;
	modeArray = NULL;

	system("pause");
	return 0;
}

Television::Television(string type, double dimen, string* connect)
	:displayType(type), dimension(dimen), connectivitySupport(connect)
{

}

Television::Television(const Television& copy) 
{
	int i;

	displayType = copy.displayType;
	dimension = copy.dimension;

	for (i = 0; i < dimension; i++) 
	{
		connectivitySupport[i] = copy.connectivitySupport[i];
	}
}

void Television::setDisplayType(string type) 
{
	displayType = type;
}

void Television::setDimension(double dimen) 
{
	dimension = dimen;
}

void Television::setConnectivitySupport(string* connect) 
{
	connectivitySupport = connect;
}