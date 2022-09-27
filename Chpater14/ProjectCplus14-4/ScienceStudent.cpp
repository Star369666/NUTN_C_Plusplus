#include "ScienceStudent.h"

void ScienceStudent::setImformation(string nam, string Id, string university, int regist)
{
	setStaff(nam, Id);
	setUniversity(university);
	setRegistration(regist);
}

void ScienceStudent::setDiscipline(string inp)
{
	discipline = inp;
}

void ScienceStudent::setCourse(string inp) 
{
	course = inp;
}
string ScienceStudent::getDiscipline(void) const
{
	return discipline;
}

string ScienceStudent::getCourse(void) const
{
	return course;
}
