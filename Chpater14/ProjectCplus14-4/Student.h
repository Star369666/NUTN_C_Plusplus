#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityStaff.h"

class Student
{
public:
	void setUniversity(string);
	void setRegistration(int);
	void setStaff(string, string);
	string getUniversity(void) const;
	int getRegistration(void) const;
	UniversityStaff getProctor() const;
protected:
	string universityName;
	int registrationNumber;
	UniversityStaff proctor;
};

#endif