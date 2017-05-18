#include <iostream>
using namespace std;
#include "Course.h"

Course::Course() {

	courseId = 000;
	courseName = "";
}
Course::Course(int id, string name) {

	courseId = id;
	courseName = name;
	ssize = 1;
	sArray = new Student[ssize];
	gSize = 1;
	gArray = new GradeForm[gSize];
	

}

int Course::getId()
{
	return courseId;
}

string Course::getCourseName()
{
	return courseName;
}

void Course::addStudent(Student stu)
{
	bool check = false;

	for (int i = 0; i < ssize; i++) {

		if (sArray[i].getStudentId() == stu.getStudentId()) {

			check = true;
			i = ssize;
			cout << "Student " << stu.getStudentId() << " already exists in Course " << courseId << endl;

		}
		
	}

	if (!check) {

		Student* temp = new Student[ssize + 1];

		for (int i = 0; i < ssize; i++) {

			temp[i] = sArray[i];
		}
		ssize++;
		temp[ssize - 2] = stu;
		delete[] sArray;
		sArray = temp;
		//temp = NULL;
		
		cout << "Student " << stu.getStudentId() << " has been added to Course " << courseId << endl;
	}

}

void Course::dropStudent(int id)
{


	int index;
	bool check = false;

	for (int i = 0; i < ssize; i++) {

		if (sArray[i].getStudentId() == id) {
			check = true;
			index = i;
		}
	}

	if (check) {

		Student* temp = new Student[ssize - 1];

		for (int i = 0; i < index; i++) {

			temp[i] = sArray[i];
		}

		for (int i = index; i < ssize - 1; i++) {

			temp[i] = sArray[i + 1];

		}

		ssize--;
		delete[] sArray;
		sArray = temp;
		//temp = NULL;

		cout << "Student " << id << " has been dropped from Course " << courseId << endl;
	}
	else
		cout << "Student " << id << " not exists in Course " << courseId << endl;	



}

void Course::addGradeForm(GradeForm form)
{
	bool check = false;
	int grade;

	for (int i = 0; i < gSize; i++) {

		if (gArray[i].getId() == form.getId()) {

			check = true;
			i = ssize;
			cout << "Gradeform " << form.getId() << " already exists in Course " << courseId << endl;

		}

	}

	if (!check) {

		GradeForm* temp = new GradeForm[gSize + 1];

		for (int i = 0; i < gSize; i++) {

			temp[i] = gArray[i];
		}
		ssize++;
		temp[ssize - 2] = form;
		delete[] gArray;
		gArray = temp;
		//temp = NULL;

		cout << "Enter the grades for Gradeform " << form.getId() << " for Course " << courseId << endl;

		for (int i = 0; i < ssize; i++) {

			cout << "Grade for student " << sArray[i].getStudentId() << ": ";
			cin >> grade;
			sArray[i].setGrade(grade);	
		}


		cout << "Gradeform " << form.getId() << " has been added to Course " << courseId << endl;


	}

}

void Course::deleteGradeForm(GradeForm)
{
}

