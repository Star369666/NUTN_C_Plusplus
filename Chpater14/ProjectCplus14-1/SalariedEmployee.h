#ifndef  SALARIEDEMPLOYEE_H
#define  SALARIEDEMPLOYEE_H

#include "employee.h"
#include <string>

namespace SavitchEmployees
{
	class SalariedEmployee : public Employee
	{
	public:
		SalariedEmployee();
		SalariedEmployee(const string& theName, const string& theSsn, double  theWeeklySalary);
		double getSalary() const;
		void setSalary(double newSalary);
		void printCheck();
	protected:
		double salary;
	};
}

#endif
