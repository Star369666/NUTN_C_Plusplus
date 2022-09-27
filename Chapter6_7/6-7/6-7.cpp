#include <iostream>
using namespace std;

class Pizza
{
public:
	Pizza() {}
	void setType(int);
	void setSize(int);
	void setFeed(int);
	int getType() const { return typeOfPizza; }
	int getSize() const { return sizeOfPizza; }
	int getFeed() const { return extraFeed; }
	void outputDescription();
	double computePrice();
private:
	int typeOfPizza;
	int sizeOfPizza;
	int extraFeed;
};

int main(void)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	int type, size, extraFeed;
	Pizza user;

	cout << "Enter the type of the pizza(1-3 for either deep dish, hand tossed, or pan): ";
	cin >> type;
	user.setType(type);
	cout << "Enter the size of the pizza(1-3 for either small, medium, or large): ";
	cin >> size;
	user.setSize(size);
	cout << "Enter how many topping the pepperoni or cheese toppings: ";
	cin >> extraFeed;
	user.setFeed(extraFeed);

	cout << "\nThis is a ";

	user.outputDescription();

	cout << "The total price is $" << user.computePrice() << ".";

	cout << "\n\n";
	system("pause");
	return 0;
}

void Pizza::setType(int type)
{
	typeOfPizza = type;
}

void Pizza::setSize(int size) 
{
	sizeOfPizza = size;
}

void Pizza::setFeed(int feed) 
{
	extraFeed = feed;
}

void Pizza::outputDescription()
{
	switch (typeOfPizza)
	{
	case 1:
		cout << "deep dish, ";
		break;
	case 2:
		cout << "hand tossed, ";
		break;
	case 3:
		cout << "pan, ";
		break;
	default:
		break;
	}

	switch (sizeOfPizza)
	{
	case 1:
		cout << "small, ";
		break;
	case 2:
		cout << "medium, ";
		break;
	case 3:
		cout << "large, ";
		break;
	default:
		break;
	}

	cout << "and with " << extraFeed << " toppings pizza.\n";
}

double Pizza::computePrice()
{
	double price = 0;

	switch (sizeOfPizza)
	{
	case 1:
		price += 10;
		break;
	case 2:
		price += 14;
		break;
	case 3:
		price += 17;
		break;
	default:
		break;
	}

	price += (double)extraFeed * 2;

	return price;
}