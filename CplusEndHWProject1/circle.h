#ifndef CIRCLE_H
#define CIRCLE_H

#include "land.h"

class circle: public land
{
public:
	circle();
	circle(double);
	void setRad(double);
	double getRad() const;
	virtual double area() const;
private:
	double radius;
};

#endif