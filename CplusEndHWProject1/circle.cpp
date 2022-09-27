#include "circle.h"

circle::circle()
{
	radius = 0;
}

circle::circle(double inp)
{
	radius = inp;
}

void circle::setRad(double a) 
{
	radius = a;
}

double circle::getRad() const 
{
	return radius;
}

double circle::area() const
{
	return 3.14159 * radius * radius;
}