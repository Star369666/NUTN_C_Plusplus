#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BoxOfProduce 
{
public:
	BoxOfProduce() {}
	void setContents(string[], int, int);
	string getContent(string[], int) const;
	void output();
private:
	string contentsOfBox[3];
};

int main(void) 
{
	srand(time(NULL));
	fstream input;
	input.open("input.txt");

	BoxOfProduce box;
	string content[5];
	int i, changeNumber, changeContentNumber;
	char check = ' ';
	int contentArray[3];

	cout << "List: \n";
	for (i = 0; i < 5; i++) 
	{
		input >> content[i];
		cout << i + 1 << "." << content[i] << "\n";
	}
	cout << "\n";

	for (i = 0; i < 3; i++) 
	{
		contentArray[i] = rand() % 5 + 1;
		box.setContents(content, contentArray[i], i);
	}
	cout << "Before the change of numbers: ";
	cout << contentArray[0] << ", " << contentArray[1] << ", " << contentArray[2];
	cout << "\nBefore the change: ";
	cout << box.getContent(content, contentArray[0]) << ", " << box.getContent(content, contentArray[1]) << ", " << box.getContent(content, contentArray[2]);
	cout << "\n\n";

	do
	{
		if (contentArray[0] == contentArray[1])
		{
			cout << "The first and second contains are " << box.getContent(content, contentArray[0]) << " as the same.\nDo you want to change any of them?(type y for yes or n for no): ";
			cin >> check;

			if (check == 'y')
			{
				cout << "Choose to change the first or the second one(0 for first, 1 for second): ";
				cin >> changeNumber;
				cout << "Choose the content you want to replace the original one(1-5 for either Broccoli, Tomato, Kiwi, Kale, and Tomatillo): ";
				cin >> changeContentNumber;
				cout << "\n";
				contentArray[changeNumber] = changeContentNumber;
			}
		}

		else if (contentArray[0] == contentArray[2])
		{
			cout << "The first and third contains are " << box.getContent(content, contentArray[0]) << " as the same.\nDo you want to change any of them?(type y for yes or n for no): ";
			cin >> check;

			if (check == 'y')
			{
				cout << "Choose to change the first or the third one(0 for first, 2 for third): ";
				cin >> changeNumber;
				cout << "Choose the content you want to replace the original one(1-5 for either Broccoli, Tomato, Kiwi, Kale, and Tomatillo): ";
				cin >> changeContentNumber;
				cout << "\n";
				contentArray[changeNumber] = changeContentNumber;
			}
		}

		else if (contentArray[1] == contentArray[2])
		{
			cout << "The second and third contains are " << box.getContent(content, contentArray[1]) << " as the same.\nDo you want to change any of them?(type y for yes or n for no): ";
			cin >> check;

			if (check == 'y')
			{
				cout << "Choose to change the second or the third one(1 for second, 2 for third): ";
				cin >> changeNumber;
				cout << "Choose the content you want to replace the original one(1-5 for either Broccoli, Tomato, Kiwi, Kale, and Tomatillo): ";
				cin >> changeContentNumber;
				cout << "\n";
				contentArray[changeNumber] = changeContentNumber;
			}
		}
		
		else 
		{
			check = ' ';
		}

	} while ((contentArray[0] == contentArray[1] || contentArray[0] == contentArray[2] || contentArray[1] == contentArray[2]) && check == 'y');

	cout << "\nThe final three numbers are: ";
	for (i = 0; i < 3; i++) 
	{
		cout << contentArray[i] << " ";
		box.setContents(content, contentArray[i], i);
	}
	cout << "\nThe final contents in the box to be delivered are: ";
	box.output();
	cout << "\n";

	system("pause");
	return 0;
}

void BoxOfProduce::setContents(string stringArray[], int input, int times)
{
	switch (input)
	{
	case 1:
		contentsOfBox[times] = stringArray[0];
		break;
	case 2:
		contentsOfBox[times] = stringArray[1];
		break;
	case 3:
		contentsOfBox[times] = stringArray[2];
		break;
	case 4:
		contentsOfBox[times] = stringArray[3];
		break;
	case 5:
		contentsOfBox[times] = stringArray[4];
		break;
	default:
		break;
	}
}

string BoxOfProduce::getContent(string stringArray[], int input) const
{
	switch (input)
	{
	case 1:
		return stringArray[0];
	case 2:
		return stringArray[1];
	case 3:
		return stringArray[2];
	case 4:
		return stringArray[3];
	case 5:
		return stringArray[4];
	default:
		break;
	}
}

void BoxOfProduce::output() 
{
	cout << contentsOfBox[0] << ", " << contentsOfBox[1] << ", " << contentsOfBox[2] << "\n";
}