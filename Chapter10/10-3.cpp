#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void)
{
	string input;
	char* head = new char, * tile = new char;
	int headCount = 0, tileCount = 0, headCurrent, tileCurrent, titleLastIndex = 0, i;

	cout << "Enter a sentence to check: ";
	getline(cin, input);

	if (head == NULL)
	{
		cout << "Error!";
		exit(1);
	}
	else if (tile == NULL)
	{
		cout << "Error!";
	}

	headCurrent = 0;
	tileCurrent = input.length() - 1;

	*head = input[headCurrent];
	*tile = input[tileCurrent];

	while (headCurrent != input.length())
	{
		headCurrent++;
		*head = input[headCurrent];
		if (isalpha(*head) || *head == ' ' || *head == '\0')
		{
			if ((*head == ' ' && input[headCurrent - 1] != ' ' && isalpha(input[headCurrent - 1])) || *head == '\0')
			{
				headCount++;
			}
		}
	}

	delete head;
	head = NULL;

	while (tileCurrent != 0)
	{
		 
		if (*tile == ' ')
		{
			titleLastIndex = tileCurrent;
		}

		if (isalpha(*tile) || *tile == ' ' || *tile == '\0' || *tile == '\'')
		{
			if ((*tile == ' ' && input[tileCurrent + 1] != ' ' && isalpha(input[tileCurrent + 1])) || *tile == '\0')
			{
				tileCount++;
			}
			tileCurrent--;
			*tile = input[tileCurrent];

			if (tileCurrent == 0 && input[0] != ' ')
			{
				tileCount++;
				for (i = 0; i < titleLastIndex; i++)
				{
					if (input[i] == ' ')
					{
						tileCount--;
						break;
					}
				}
			}
			else if (tileCurrent == 0 && input[0] == ' ')
			{
				if (input[1] != ' ')
				{
					tileCount++;
				}
			}
		}
		else 
		{
			tileCurrent--;
			*tile = input[tileCurrent];
		}
	}
	delete tile;
	tile = NULL;

	cout << "\nResult:\nHead: " << headCount << " words\nTail: " << tileCount << " words\n\n";

	if (headCount == tileCount) 
	{
		cout << "They are the same.\n";
	}
	else 
	{
		cout << "They are different.\n";
	}

	system("pause");
	return 0;
}