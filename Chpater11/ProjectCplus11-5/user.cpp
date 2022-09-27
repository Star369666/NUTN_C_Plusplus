#include "user.h"

namespace Authenticate
{
	void inputUserName()
	{
		do
		{
			cout << "Enter your username (8 letters only)" << endl;
			cin >> username;
		} while (!isValid());
	}

	string getUserName()
	{
		return username;
	}
}

namespace 
{
	bool isValid()
	{
		int i;

		for (i = 0; i < 8; i++)
		{
			if (!isalpha(username[i]))
			{
				return false;
			}
		}

		return true;
	}
}
