#include "Security.h"

#ifndef USER_H
#define USER_H

class User
{
public:
	User() {}
	int Login();
	void setUser(string, string);
	Security getUser(void) const;
private:
	Security user;
};

#endif