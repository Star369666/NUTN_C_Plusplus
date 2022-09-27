#include <iostream>
using namespace std;

class zipCode
{
public:
	zipCode() {}
	zipCode(int);
	zipCode(int[]);
	void setBarCode(string, int[]);
	void setZipCodeAsBarCode(int);
	int getZipCode (int[]) const;
	void getBarCode(int[]) const;
private:
	int barCode[27];
};

int main(void) 
{
	zipCode bar({ 0 }), zip(0);
	string barInput;
	int barArray[27], zipGet[5], zipToBarArray[27];
	int choose, i, zipReturn, rest, zipInput;

	cout << "Choose a method to enter the code either 1 for bar code or 2 for zip code: ";
	cin >> choose;
	do 
	{
		if (choose != 1 && choose != 2) 
		{
			cout << "Invalid! Please choose again: ";
			cin >> choose;
		}
	} while (choose != 1 && choose != 2);

	do
	{
		if (choose == 1)
		{
			cout << "Enter the whole 27-digit bar code: ";
			cin >> barInput;

			cout << "\nThe bar code is: ";
			for (i = 0; i < 27; i++)
			{
				cout << barInput[i] << " ";
			}

			bar.setBarCode(barInput, barArray);

			zipReturn = bar.getZipCode(barArray);

			if (zipReturn < 10000)
			{
				zipGet[0] = 0;
				rest = 0;
				for (i = 1; i < 5; i++)
				{
					zipGet[i] = int(zipReturn / pow(10, 4 - i)) - 10 * rest;
					rest = 10 * rest + zipGet[i];
				}

				cout << "\nThe zip code is: ";
				for (i = 0; i < 5; i++) 
				{
					cout << zipGet[i];
				}
			}
			else 
			{
				cout << "\nThe zip code is: " << zipReturn << "\n";
			}
		}

		else 
		{
			cout << "Enter the whole 5-digit zip code: ";
			cin >> zipInput;
			
			zip.setZipCodeAsBarCode(zipInput);
			zip.getBarCode(zipToBarArray);

			cout << "\nThe bar code is: ";

			for (i = 0; i < 27; i++) 
			{
				cout << zipToBarArray[i];
			}

			zipReturn = zip.getZipCode(zipToBarArray);

			if (zipReturn < 100)
			{
				cout << "\n" << "The zip code is: 000" << zipReturn << "\n";
			}
			else if (zipReturn < 1000)
			{
				cout << "\n" << "The zip code is: 00" << zipReturn << "\n";
			}
			else if (zipReturn < 10000)
			{
				cout << "\n" << "The zip code is: 0" << zipReturn << "\n";
			}
		}

		cout << "\nDo you want to redo another project? Enter 1 for bar code start or 2 for zip code start or 0 for quit the loop: ";
		cin >> choose;
		cout << "\n";

	} while (choose == 1 || choose == 2);

	system("pause");
	return 0;
}

zipCode::zipCode(int zip)
{
	int zipArray[5], barArray[25], bar[27];
	int i, rest = 0;
	
	if (zip < 10000) 
	{
		zipArray[0] = 0;
	}
	else 
	{
		zipArray[0] = zip / pow(10, 4);
	}
	
	for (i = 1; i < 5; i++)
	{
		zipArray[i] = zip / pow(10, 4 - i) - 10 * rest;
		rest = 10 * rest + zipArray[i];
	}

	for (i = 0; i < 5; i++) 
	{
		
		switch (zipArray[i])
		{
		case 0:
			barArray[0 + 5 * i] = 1;
			barArray[1 + 5 * i] = 1;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 0;
			break;
		case 1:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 1;
			barArray[4 + 5 * i] = 1;
			break;
		case 2:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 1;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 1;
			break;
		case 3:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 1;
			barArray[3 + 5 * i] = 1;
			barArray[4 + 5 * i] = 0;
			break;
		case 4:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 1;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 1;
			break;
		case 5:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 1;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 1;
			barArray[4 + 5 * i] = 0;
			break;
		case 6:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 1;
			barArray[2 + 5 * i] = 1;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 0;
			break;
		case 7:
			barArray[0 + 5 * i] = 1;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 1;
			break;
		case 8:
			barArray[0 + 5 * i] = 1;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 1;
			barArray[4 + 5 * i] = 0;
			break;
		case 9:
			barArray[0 + 5 * i] = 1;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 1;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 0;
			break;
		default:
			break;
		}
	}

	bar[0] = 1;
	bar[26] = 1;

	for (i = 1; i < 26; i++) 
	{
		bar[i] = barArray[i - 1];
	}

	for (i = 0; i < 27; i++) 
	{
		barCode[i] = bar[i];
	}
}

zipCode::zipCode(int bar[]) 
{
	int i = 0;

	for (i = 0; i < 27; i++) 
	{
		barCode[i] = bar[i];
	}
}

void zipCode::setBarCode(string barInput, int bar[]) 
{
	int i;

	for (i = 1; i < 26; i++) 
	{
		bar[i] = barInput[i] - '0';
	}
}

void zipCode::setZipCodeAsBarCode(int zip)
{
	int zipArray[5], zipCheck[25], barArray[25], bar[27];
	int i, j, rest;

	if (zip < 10000)
	{
		zipArray[0] = 0;
	}
	else
	{
		zipArray[0] = zip / pow(10, 4);
	}

	rest = zipArray[0];
	for (i = 1; i < 5; i++)
	{
		zipArray[i] = zip / pow(10, 4 - i) - 10 * rest;
		rest = 10 * rest + zipArray[i];
	}

	for (i = 0; i < 5; i++)
	{
		switch (zipArray[i])
		{
		case 0:
			barArray[0 + 5 * i] = 1;
			barArray[1 + 5 * i] = 1;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 0;
			break;
		case 1:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 1;
			barArray[4 + 5 * i] = 1;
			break;
		case 2:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 1;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 1;
			break;
		case 3:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 1;
			barArray[3 + 5 * i] = 1;
			barArray[4 + 5 * i] = 0;
			break;
		case 4:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 1;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 1;
			break;
		case 5:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 1;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 1;
			barArray[4 + 5 * i] = 0;
			break;
		case 6:
			barArray[0 + 5 * i] = 0;
			barArray[1 + 5 * i] = 1;
			barArray[2 + 5 * i] = 1;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 0;
			break;
		case 7:
			barArray[0 + 5 * i] = 1;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 1;
			break;
		case 8:
			barArray[0 + 5 * i] = 1;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 0;
			barArray[3 + 5 * i] = 1;
			barArray[4 + 5 * i] = 0;
			break;
		case 9:
			barArray[0 + 5 * i] = 1;
			barArray[1 + 5 * i] = 0;
			barArray[2 + 5 * i] = 1;
			barArray[3 + 5 * i] = 0;
			barArray[4 + 5 * i] = 0;
			break;
		default:
			break;
		}
	}

	bar[0] = 1;
	bar[26] = 1;

	for (i = 1; i < 26; i++)
	{
		bar[i] = barArray[i - 1];
	}

	for (i = 0; i < 27; i++)
	{
		barCode[i] = bar[i];
	}
}

int zipCode::getZipCode(int bar[]) const
{
	int barTransform[25], barCalculator[5], calculator[5] = { 0,0,0,0,0 };
	int i, j, result = 0;

	for (i = 1; i < 26; i++) 
	{
		barTransform[i - 1] = bar[i];
	}

	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 5; j++)
		{
			barCalculator[j] = barTransform[j + 5 * i];
			switch (barCalculator[j])
			{
			case 1:
				switch (j)
				{
				case 0:
					calculator[i] += barCalculator[j] * 7;
					break;
				case 1:
					calculator[i] += barCalculator[j] * 4;
					break;
				case 2:
					calculator[i] += barCalculator[j] * 2;
					break;
				case 3:
					calculator[i] += barCalculator[j] * 1;
					break;
				case 4:
					calculator[i] += barCalculator[j] * 0;
					break;
				default:
					break;
				}
			default:
				break;
			}
		}

		if (calculator[i] == 11) 
		{
			calculator[i] = 0;
		}
	}

	for (i = 0; i < 5; i++) 
	{
		result += pow(10, 4 - i) * calculator[i];
	}
	
	return result;
}

void zipCode::getBarCode(int a[]) const
{ 
	int i;

	for (i = 0; i < 27; i++) 
	{
		a[i] = barCode[i];
	}
}