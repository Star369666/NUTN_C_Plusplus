#ifndef LAND_H
#define LAND_H

#include <iostream>
#include <fstream>
#include <ostream>
#include <istream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <ctime>
#include <cstring>
using namespace std;

class land
{
public:
	void setAtt(string);
	void setLoc(string);
	string getAtt() const;
	string getLoc() const;
	virtual double area() const;
private:
	string location;
	string attributes;
};

#endif