#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class creature 
{
public:
	creature();
	void setRace(int);
	int getRace(void) const;
	virtual int getDamage(int, int) const;
	void setSpeice(int);
	int getSepice() const;
private:
	int race;
	int speice;
};

#endif
