#include "Security.h"

#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

class Administrator
{
public:
	Administrator() {}
	int Login();
	void setAdmin(string, string);
	Security getAdmin(void) const;
private:
	Security admin;
};

#endif