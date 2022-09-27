#include <iostream>
#include <cctype>
using namespace std;

#ifndef PASSWORD_H
#define PASSWORD_H

namespace
{
	string password;
	bool isValid();
}

namespace Authenticate
{
	string getPassword();
	void inputPassword();
}

#endif 
