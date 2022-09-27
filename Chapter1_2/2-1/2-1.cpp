#include <iostream>
using namespace std;

int main(void) 
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	int floorNumber, basePrice, taxPrice, amenityPrice, totalPrice = 0, i, j;
	float amentityRate, taxRate;

	cout << "Enter the number of floors: ";
	cin >> floorNumber;
	cout << "Enter the price of the first floor: ";
	cin >> basePrice;
	cout << "Enter the rate of using amenities: ";
	cin >> amentityRate;
	cout << "Enter the rate of the tax: ";
	cin >> taxRate;

	j = 0;

	for (i = 1; i <= floorNumber; i++)
	{
		basePrice = basePrice * pow(1.02, j);
		amenityPrice = basePrice * amentityRate;
		taxPrice = (basePrice + amenityPrice) * taxRate;
		totalPrice = basePrice + amenityPrice + taxPrice;

		cout << "\nThe information of " << i << "th floor:\n";
		cout << "The base price: " << basePrice << "\n";
		cout << "Charges on amenities: " << amenityPrice << "\n";
		cout << "Charges on taxes: " << taxPrice << "\n";
		cout << "The total price of apartments on this floor: " << totalPrice << "\n";
		j += 2;
	}

	cout << "\n";
	system("pause");
	return 0;
}