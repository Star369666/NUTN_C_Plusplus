#include "password.h"

namespace Authenticate
{
	void inputPassword()
	{
		do
		{
			cout << "Enter your password (at least 8 characters " <<
				"and at least one non-letter)" << endl;
			cin >> password;
		} while (!isValid());
	}

	string getPassword()
	{
		return password;
	}
}

namespace
{
	bool isValid()
	{
		int i = 0, charCount = 0, nonCharCount = 0;

		while (password[i] != '\0')
		{
			if (!isalpha(password[i]))
			{
				nonCharCount++;
			}

			i++;
			charCount++;
		}

		if (nonCharCount >= 1 && charCount >= 8)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}