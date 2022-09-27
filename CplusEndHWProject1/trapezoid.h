#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "land.h"

class trapezoid: public land
{
public:
	trapezoid();
	trapezoid(double, double, double);
	void setHsid(double);
	void setLsid(double);
	void setHei(double);
	double getHsid() const;
	double getLsid() const;
	double getHei() const;
	virtual double area() const;
private:
	double hside;
	double lside;
	double height;
};

#endif
