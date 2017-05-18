#include "Student.h"

Student::Student(int id, string name)
{
	stuId = id;
	stuName = name;
	grade = 0;

}

Student::Student(const int id)
{
	stuId = id;
	grade = 0;
}

Student::Student()
{
	stuId = 000;
	stuName = "";
	grade = 0;
}

void Student::setGrade(const int g)
{
	grade = g;

}

int Student::getGrade(const int)
{
	return grade;
}

int Student::getStudentId()
{
	return stuId;
}

string Student::getStudentName()
{
	return stuName;
}

