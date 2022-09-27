#include "square.h"

square::square()
{
	side = 0;
}

square::square(double a) 
{
	side = a;
}

void square::setSid(double a) 
{
	side = a;
}

double square::getSid() const 
{
	return side;
}

double square::area() const
{
	return side * side;
}