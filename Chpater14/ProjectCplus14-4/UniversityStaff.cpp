#include "UniversityStaff.h"

UniversityStaff::UniversityStaff() 
{
	
}

UniversityStaff::UniversityStaff(string theName) 
{
	name = theName;
	length = 0;
	id = NULL;
}

UniversityStaff::UniversityStaff(const UniversityStaff& theObject) 
{
	int i = 0,  count = 0;

	name = theObject.getName();
	length = theObject.getLen();

	id = new int[length];
	id = theObject.getID();

	cout << "Copy constrator launched.\n";
}

void UniversityStaff::setName(string nam)
{
	name = nam;
}

void UniversityStaff::setIDAndLen(string ID)
{
	int i;
	length = ID.length();
	id = new int[length];

	for (i = 0; i < length; i++) 
	{
		id[i] = ID[i] - '0';
	}
}

string UniversityStaff::getName() const 
{
	return name;
}

int* UniversityStaff::getID(void) const 
{
	return id;
}

int UniversityStaff::getLen(void) const
{
	return length;
}

UniversityStaff& UniversityStaff::operator=(const UniversityStaff& rtSide) 
{
	int i;
	if (length != rtSide.length) 
	{
		delete[] id;
		id = new int[rtSide.length];
	}
	
	length = rtSide.length;
	name = rtSide.name;
	for (i = 0; i < length; i++) 
	{
		id[i] = rtSide.id[i];
	}

	return *this;
}

istream& operator >>(istream& inStream, UniversityStaff& staffObject) 
{
	string nam, ID;
	int len, i;

	inStream >> nam >> len >> ID; 

	staffObject.name = nam;
	staffObject.length = len;
	staffObject.id = new int[len];

	for (i = 0; i < len; i++) 
	{
		staffObject.id[i] = ID[i] - '0';
	}

	return inStream;
}

ostream& operator <<(ostream& outStream, const UniversityStaff& staffObject) 
{
	int i;
	outStream << "Student: " << staffObject.name << "\nID: ";

	for (i = 0; i < staffObject.length; i++) 
	{
		outStream << staffObject.id[i];
	}

	cout << "\n";

	return outStream;
}
