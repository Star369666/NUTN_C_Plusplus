#include "land.h"

void land::setAtt(string a) 
{
	attributes = a;
}

void land::setLoc(string a)
{
	location = a;
}

string land::getAtt() const
{
	return attributes;
}

string land::getLoc() const
{
	return location;
}

double land::area() const
{
	return 0;
}