#include "Security.h"
#include "Administrator.h"
#include "User.h"

int main(void) 
{
	User user, admin;
	string name, password;

	cout << "Administrator part:\n";
	cout << "Enter a name to check: ";
	getline(cin, name);
	
	cout << "Enter a password to check: ";
	
	getline(cin, password);

	admin.setUser(name, password);

	if (admin.Login() == 2) 
	{
		cout << "\nWelcome, administrator.\n\n";
	}
	else 
	{
		cout << "\nLogin Invalid.\n\n";
	}

	cout << "User part:\n";
	cout << "Enter a name to check: ";
	getline(cin, name);

	cout << "Enter a password to check: ";
	getline(cin, password);

	user.setUser(name, password);

	if (user.Login() == 1)
	{
		cout << "\nWelcome, user.\n\n";
	}
	else if (user.Login() == 2)
	{
		cout << "\nWelcome, administrator.\n\n";
	}
	else 
	{
		cout << "\nLogin Invalid.\n\n";
	}

	system("pause");
	return 0;
}