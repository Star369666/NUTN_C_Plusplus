#ifndef SQUARE_H
#define SQUARE_H

#include "land.h"

class square: public land 
{
public:
	square();
	square(double);
	void setSid(double);
	double getSid() const;
	virtual double area() const;
private:
	double side;
};

#endif