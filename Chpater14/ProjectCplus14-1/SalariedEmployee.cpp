#include "SalariedEmployee.h";

namespace SavitchEmployees
{
	SalariedEmployee::SalariedEmployee()
		:Employee(), salary(0)
	{
		
	}

	SalariedEmployee::SalariedEmployee(const string& theName, const string& theSsn, double  theWeeklySalary)
		:Employee(theName, theSsn), salary(theWeeklySalary)
	{
		
	}

	double SalariedEmployee::getSalary() const 
	{
		return salary;
	}

	void SalariedEmployee::setSalary(double newSalary) 
	{
		salary = newSalary;
	}

	void SalariedEmployee::printCheck() 
	{
		setNetPay(salary);
		cout << "\n________________________________________________\n";
		cout << "Pay to the order of " << getName() << endl;
		cout << "The sum of " << getNetPay() << " Dollars\n";
		cout << "_________________________________________________\n";
		cout << "Check Stub NOT NEGOTIABLE \n";
		cout << "Employee Number: " << getSsn() << endl;
		cout << "Salaried Employee. Regular Pay: " << salary << endl;
		cout << "_________________________________________________\n";
	}
}