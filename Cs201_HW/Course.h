#include <iostream>
using namespace std;
#include"Student.h"
#include"GradeForm.h"

class Course {

private:
	int courseId;
	string courseName;

	Student* sArray;
	int ssize;

	GradeForm* gArray;
	int gSize;

public:

	Course(int, string);
	Course();
	int getId();
	string getCourseName();
	void addStudent(Student);
	void dropStudent(int);
	void addGradeForm(GradeForm);
	void deleteGradeForm(GradeForm);
};
#pragma once
