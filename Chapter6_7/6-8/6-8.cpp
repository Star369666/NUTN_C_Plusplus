#include <iostream>
using namespace std;

class Money 
{
public:
	Money() {}
	void setDollar(double);
	void setCent(double);
	double getDollar() const { return dollar; }
	double getCent() const { return cent; }
	double sum();
private:
	double dollar;
	double cent;
};

int main(void) 
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	Money money;
	double dollar, cent;

	cout << "Enter the number of dollars: ";
	cin >> dollar;
	cout << "Enter the number of cent: ";
	cin >> cent;
	
	money.setDollar(dollar);
	money.setCent(cent);
	money.getDollar();
	money.getCent();

	cout << "\nThe total dollar is " << money.sum() << " dollars.\n\n";

	system("pause");
	return 0;
}

void Money::setDollar(double input)
{
	dollar = input;
}

void Money::setCent(double input)
{
	cent = input;
}

double Money::sum() 
{
	return dollar + cent / 100;
}