#ifndef SCIENCESTUDENT_H
#define SCIENCESTUDENT_H

#include "Student.h"

class ScienceStudent: public Student
{
public:
	void setImformation(string nam, string Id, string university, int regist);
	void setDiscipline(string);
	void setCourse(string);
	string getDiscipline(void) const;
	string getCourse(void) const;
private:
	string discipline;
	string course;
};

#endif // !SCIENCESTUDENT_H
