#include <iostream>
#include <string>
using namespace std;
#ifndef  SECURITY_H
#define  SECURITY_H

class Security
{
public:
	Security() {}
	static int validate(string username, string password);
	void setUserName(string);
	void setPassword(string);
	string getUserName(void) const;
	string getPassword(void) const;
private:
	string username;
	string password;
};

#endif