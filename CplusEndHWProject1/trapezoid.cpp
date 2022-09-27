#include "trapezoid.h"

trapezoid::trapezoid()
{
	hside = 0; 
	lside = 0;
	height = 0;
}

trapezoid::trapezoid(double a, double b, double c) 
{
	hside = a;
	lside = b;
	height = c;
}

void trapezoid::setHsid(double a) 
{
	hside = a;
}

void trapezoid::setLsid(double a) 
{
	lside = a;
}

double trapezoid::getHsid() const 
{
	return hside;
}

double trapezoid::getLsid() const 
{
	return lside;
}

void trapezoid::setHei(double a)
{
	height = a;
}
double trapezoid::getHei() const
{
	return height;
}

double trapezoid::area() const 
{
	return (hside + lside) * height / 2;
}

