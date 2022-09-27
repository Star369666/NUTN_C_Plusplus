#ifndef UNIVERSITYSTAFF_H
#define UNIVERSITYSTAFF_H

#include <iostream>
#include <string>
#include <ostream>
#include <istream>
using namespace std;

class UniversityStaff
{
public:
	UniversityStaff();
	UniversityStaff(string theName);
	UniversityStaff(const UniversityStaff& theObject);
	string getName() const;
	UniversityStaff& operator=(const UniversityStaff& rtSide);
	friend istream& operator >>(istream& inStream, UniversityStaff& staffObject);
	friend ostream& operator <<(ostream& outStream, const UniversityStaff& staffObject);
	void setName(string);
	void setIDAndLen(string);
	int* getID(void) const;
	int getLen(void) const;
private:
	string name;
	int length;
	int* id;
};

#endif