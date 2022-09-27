#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void) 
{
	string buffer, letters[50], sign[50];
	int i, j, k, check = 1;

	cout << "Example: \n\n";
	cout << "Original: I hate you, you dodo!\nAfter change: I love you, you love!";
	
	cout << "\n\n";
	do
	{
		i = 0; j = 0; k = 0;
		cout << "Enter a string to replace: \nOriginal: ";
		getline(cin, buffer);
		letters[i] = buffer[j];
		j += 1;
		do 
		{
			while(buffer[j] != ' ' && buffer[j] != '\n' && buffer[j] != '\0')
			{
				
				if (isalpha(buffer[j]) != 0) 
				{
					letters[i] = letters[i] + buffer[j];
				}
				else if(buffer[j] == '\0')
				{
					i--;
				}
				else if (isalpha(buffer[j]) == 0 && buffer[j] != ' ')
				{
					sign[i] = buffer[j];
				}
				else 
				{
					i++;
					j++;
				}
				if (buffer[j] != ' ')
				{
					j++;
				}
			}
			if (buffer[j] == '\0') 
			{
				break;
			}
			else 
			{
				i++;
				j++;
			}
		} while (buffer[j] != '\0');

		cout << "After change: ";
		for (j = 0; j < i + 1; j++) 
		{
			if (letters[j].length() == 4) 
			{
				if (j == 0) 
				{
					letters[j] = "Love";
				}
				else 
				{
					letters[j] = "love";
				}
			}
			letters[j] = letters[j] + sign[j];
			cout << letters[j] << " ";
			letters[j].clear();
			sign[j].clear();
		}

		cout << "\n\nEnter 1 to redo again or 0 to quit: ";
		cin >> check;
		cout << "\n";
		cin.ignore();
	} while (check == 1);

	system("pause");
	return 0;
}