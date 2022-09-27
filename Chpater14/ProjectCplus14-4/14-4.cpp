#include "ScienceStudent.h"

int main(void) 
{
	ScienceStudent student;
	string name, id, university, disciline, course;
	int regist;

	cout << "Enter the name of the university staff: ";
	cin >> name;

	cout << "Enter the id of the university staff: ";
	cin >> id;

	cout << "Enter the name of the university of the student(a - c): ";
	cin >> university;

	cout << "Enter the registration number of the student(123, 456, or 789): ";
	cin >> regist;
	cin.ignore();

	student.setImformation(name, id, university, regist);

	if (university == "a" && regist == 123)
	{
		cout << "The student is a science student.\n";

		cout << "Enter the disciline of the science student: ";
		cin >> disciline;

		cout << "Enter the course of the science student: ";
		cin >> course;

		student.setDiscipline(disciline);
		student.setCourse(course);
	}
	else 
	{
		cout << "This is not a science student.\n";
	}

	cout << "\n";
	cout << "Student's name: " << student.getProctor() << "The name of the university of the student: " << student.getUniversity() << "\nRegistration: "
			<< student.getRegistration();

	if (university == "a" && regist == 123) 
	{
		cout << "\nDiscipline: " << student.getDiscipline() << "\nCourse: " << student.getCourse();
	}

	cout << "\n\n";
	system("pause");
	return 0;
}