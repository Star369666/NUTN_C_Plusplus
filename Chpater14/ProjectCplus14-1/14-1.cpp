#include "Administrator.h"

int main(void) 
{
	Administrator admin;
	string name, ssn, title, responsibility, supervisorName;
	double netPay, weeklySalary;

	cout << "Enter the name of the admin: ";
	getline(cin, name);

	cout << "Enter the ssn of the admin: ";
	getline(cin, ssn);

	cout << "Enter the netPay of the admin: ";
	cin >> netPay;
	cin.ignore();

	cout << "Enter the title of the admin: ";
	getline(cin, title);

	cout << "Enter the weekly salary of the admin: ";
	cin >> weeklySalary;
	cin.ignore();

	cout << "Enter the responsibility of the admin: ";
	getline(cin, responsibility);

	cout << "Enter the supervistor's name of the admin: ";
	getline(cin, supervisorName);

	admin.setImformation(name, ssn, netPay, weeklySalary);
	admin.setTitle(title);
	admin.setResponsibility(responsibility);
	admin.setSupervisor(supervisorName);
	admin.setAnnual();

	cout << "\n";
	admin.printImformation();
	admin.printCheck();

	system("pause");
	return 0;
}