#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "SalariedEmployee.h"
using namespace SavitchEmployees;

class Administrator :protected SalariedEmployee
{
public:
	Administrator() {}
	void setImformation(string, string, double, double);
	void setSupervisor(string);
	void setTitle(string);
	void setResponsibility(string);
	void setAnnual();
	void printImformation() const;
	void printCheck() const;
private:
	string title;
	string responsibility;
	string supervisorName;
protected:
	double annualSalary;
};
#endif
