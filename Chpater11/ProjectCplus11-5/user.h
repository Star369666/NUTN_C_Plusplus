#include <iostream>
#include <cctype>
using namespace std;

#ifndef USER_H
#define USER_H

namespace
{
	string username;
	bool isValid();
}

namespace Authenticate
{
	string getUserName();
	void inputUserName();
}

#endif
