#include <iostream>
using namespace std;

class HotDogStand
{
public:
	HotDogStand() {}
	void setID(int);
	void setSoldNumber(int);
	void setSoldOutNow(int);
	int getID() const { return IDNumber; }
	int getSold() const { return soldNumber; }
	int getTotalSold() const { return soldNumber + soldOutNow; }
	void JustSold();
	static void setTotalAll(int);
	static int getTotalAll() { return totalSoldAll; }
	static void increamTotalAll();

private:
	int IDNumber;
	int soldNumber;
	int soldOutNow;
	static int totalSoldAll;
};

int HotDogStand::totalSoldAll = 0;

int main(void)
{
	srand(time(NULL));

	HotDogStand stand[30];
	int standChoose[1000], ID[30], soldNumber[30];
	int standNumber, howManySold, i;

	cout << "Enter how many stands you operate(Must larger than 2, maximum is 30): ";
	cin >> standNumber;
	do 
	{
		if (standNumber < 3) 
		{
			cout << "Invalid! The number of stands must larger than 2.";
		}
	} while (standNumber < 3);

	cout << "Enter the ID for the stands: ";
	for (i = 0; i < standNumber; i++)
	{
		cin >> ID[i];
		stand[i].setID(ID[i]);
	}

	cout << "Enter the numbers of sold hot dogs for the stand currently: ";
	for (i = 0; i < standNumber; i++)
	{
		cin >> soldNumber[i];
		stand[i].setSoldNumber(soldNumber[i]);
		HotDogStand::setTotalAll(stand[i].getSold());
	}

	for (i = 0; i < standNumber; i++) 
	{
		stand[i].setSoldOutNow(0);
	}

	cout << "Enter how many total number of hot dogs should be sold by the stands(maximum is 1000): ";
	cin >> howManySold;
	do 
	{
		if (howManySold < 0) 
		{
			cout << "Invalid! The number of sold must larger than 0.";
		}
	} while (howManySold < 0);

	cout << "\n\nSold process:\n";
	for (i = 0; i < howManySold; i++)
	{
		standChoose[i] = rand() % standNumber + 1;
		cout << "The ID " << stand[standChoose[i] - 1].getID() << " stand just sold a hot dog!\n";
		HotDogStand::increamTotalAll();
		stand[standChoose[i] - 1].JustSold();
	}
	cout << "\n\n";

	cout << "Result: \n";
	for (i = 0; i < standNumber; i++)
	{
		cout << "The ID " << stand[i].getID() << " stand's total number for sold is " << stand[i].getTotalSold() << "\n";
	}

	cout << "The total number for sold which is combined by all stands is " << HotDogStand::getTotalAll();

	cout << "\n\n";
	system("pause");
	return 0;
}

void HotDogStand::setID(int id)
{
	IDNumber = id;
}

void HotDogStand::setSoldNumber(int sold)
{
	soldNumber = sold;
}

void HotDogStand::setSoldOutNow(int original) 
{
	soldOutNow = original;
}

void HotDogStand::JustSold()
{
	soldOutNow++;
}

void HotDogStand::setTotalAll(int input)
{
	totalSoldAll += input;
}

void HotDogStand::increamTotalAll()
{
	totalSoldAll++;
}