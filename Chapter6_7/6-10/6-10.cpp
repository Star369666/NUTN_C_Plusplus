#include <iostream>
using namespace std;

class Weight
{
public:
	Weight() {}
	void setWeightPounds(double);
	void setWeightKilograms(double);
	void setWeightOunces(double);
	double getPounds() const { return weight; }
	double getKilograms() const { return weight / 2.21; }
	double getOunces() const { return 16 * weight; }

private:
	double weight;
};

int main(void) 
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	Weight tester;
	int unit;
	double weight;

	cout << "Enter the unit which you want to use(1-3 for either pound, kilogram, or ounce): ";
	cin >> unit;
	cout << "Enter the value of weight: ";
	cin >> weight;
	
	switch (unit)
	{
	case 1:
		tester.setWeightPounds(weight);
		break;
	case 2:
		tester.setWeightKilograms(weight);
		break;
	case 3:
		tester.setWeightOunces(weight);
		break;
	default:
		break;
	}

	cout << "\nPounds: " << tester.getPounds() << "\n" << "Kilograms: " << tester.getKilograms() << "\n" << "Ounces: " << tester.getOunces() << "\n\n";

	system("pause");
	return 0;
}

void Weight::setWeightPounds(double input)
{
	weight = input;
}

void Weight::setWeightKilograms(double input)
{
	weight = input * 2.21;
}

void Weight::setWeightOunces(double input)
{
	weight = input / 16;
}