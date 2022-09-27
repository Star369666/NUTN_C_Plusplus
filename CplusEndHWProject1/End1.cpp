#include "circle.h"
#include "square.h"
#include "trapezoid.h"

#define UPRICE 330

/*double Calcu_Price(circle&);
double Calcu_Price(square&);
double Calcu_Price(trapezoid&);*/

double Calcu_Price(land&);

int main(void) 
{
	circle c(2);
	square s(3);
	trapezoid t(4.7, 5.3, 2.1);
	string loc[3];
	double rad, side, hside, lside, height;

	cout << "Enter 3 locations: ";
	cin >> loc[0] >> loc[1] >> loc[2];
	//cout << "Enter rad, side, hside, lside, height, price: ";
	//cin >> rad >> side >> hside >> lside >> height;

	c.setAtt("Circle");
	//c.setRad(rad);
	c.setLoc(loc[0]);

	s.setAtt("Square");
	//s.setSid(side);
	s.setLoc(loc[1]);

	t.setAtt("±è§Î");
	//t.setHsid(hside);
	//t.setLsid(lside);
	t.setLoc(loc[2]);

	cout << "\n";
	cout << "C: " << Calcu_Price(c) << "\n";
	cout << "S: " << Calcu_Price(s) << "\n";
	cout << "T: " << Calcu_Price(t) << "\n";

	system("pause");
	return 0;
}

/*double Calcu_Price(circle& a)
{
	return a.area() * 330;
}

double Calcu_Price(square& a) 
{
	return a.area() * 330;
}

double Calcu_Price(trapezoid& a) 
{
	return a.area() * 330;
}*/

double Calcu_Price(land& l) 
{
	return l.area() * UPRICE;
}