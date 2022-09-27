#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include<ctime>
using namespace std;

class creature 
{
public:
	creature();
	void setType(int);
	int getType(void) const;
	virtual int getDamage(int, int) const;
private:
	int race;
};

#endif
