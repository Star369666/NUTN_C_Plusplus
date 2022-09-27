#include "Administrator.h"

void Administrator::setImformation(string nam, string ssn, double netp, double salar) 
{
	setName(nam);
	setSsn(ssn);
	setNetPay(netp);
	setSalary(salar);
}

void Administrator::setSupervisor(string supervisor)
{
	supervisorName = supervisor;
}

void Administrator::setTitle(string tit)
{
	title = tit;
}

void Administrator::setResponsibility(string respon)
{
	responsibility = respon;
}

void Administrator::setAnnual()
{
	annualSalary = getSalary() * 48;
}

void Administrator::printImformation() const
{
	cout << "Name: " << getName() << "\nSSN: " << getSsn() << "\nNetPay: " << getNetPay() << "\nSalary: " << getSalary()
		<< "\nTitle: " << title << "\nResponsibility: " << responsibility << "\nThe name of the supervisor of the administrator: " << supervisorName << "\nAnnual salary: " << annualSalary << "\n\n";
}

void Administrator::printCheck() const
{
	cout << "The check for " << getName() << " is " << getSalary() * 48 + getNetPay() << endl;
}