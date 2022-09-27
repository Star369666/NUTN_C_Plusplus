#include "Student.h"

void Student::setUniversity(string inp) 
{
	universityName = inp;
}

void Student::setRegistration(int inp)
{
	registrationNumber = inp;
}

void Student::setStaff(string nam, string id)
{
	proctor.setName(nam);
	proctor.setIDAndLen(id);
}

string Student::getUniversity(void) const 
{
	return universityName;
}

int Student::getRegistration(void) const 
{
	return registrationNumber;
}

UniversityStaff Student::getProctor() const 
{
	return proctor;
}
