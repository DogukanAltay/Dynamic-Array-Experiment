#include <iostream>
using namespace std;

#include"StudentReviewSystem.h"
#include"Course.h"



StudentReviewSystem::StudentReviewSystem()
{
	courseArray = new Course[1];
	cSize = 1;
	
}


StudentReviewSystem::~StudentReviewSystem()
{
	
}

void StudentReviewSystem::addCourse(const int courseId, const string CourseName) {

	Course newCourse = Course(courseId, CourseName);
	int tCount = cSize;
	bool check=false;




	for (int i = 0; i < cSize; i++) {
		if (courseArray[i].getId() == courseId) {
			cout << "Course " << courseId << " already exists." << endl;
			i = cSize;
			check = true;

		}
	}

	if (!check) {

		Course* temp = new Course[cSize + 1];

		for (int i = 0; i < cSize; i++) {

			temp[i] = courseArray[i];
			
		}
		cSize++;
		temp[cSize - 2] = newCourse;
		delete[] courseArray;
		courseArray = temp;
		temp = NULL;
		cout << "Course " << courseId << " has been added. " << endl;
	}




}

void StudentReviewSystem::deleteCourse(const int courseId) {

	int index;
	bool check=false;

	for (int i = 0; i < cSize; i++) {

		if (courseArray[i].getId() == courseId) {
			check = true;
			index = i;
		}
	}

	if (check) {

		Course* temp = new Course[cSize - 1];

		for (int i = 0; i < index; i++) {

			temp[i] = courseArray[i];
		}

		for (int i = index; i < cSize - 1; i++) {

			temp[i] = courseArray[i + 1];
			
		}

		cSize--;
		delete[] courseArray;
		courseArray = temp;
		temp = NULL;

		cout << "Course " << courseId << " has been removed. " << endl;
	}
	else
		cout << "Course " << courseId << " not exists." << endl;


}

void StudentReviewSystem::addStudent(const int courseId, const int studentId, const string studentName)
{
	Student newStudent = Student(studentId, studentName);

	bool check = false;

	for (int i = 0; i < cSize; i++) {

		if (courseArray[i].getId() == courseId) {

			courseArray[i].addStudent(newStudent);
			i = cSize;
			check = true;
		}

	}

	if (!check) 
		cout << "Course " << courseId << " does not exist." << endl;
	

}

void StudentReviewSystem::dropStudent(const int courseId, const int studentId)
{

	bool check = false;

	for (int i = 0; i < cSize; i++) {

		if (courseArray[i].getId() == courseId) {

			courseArray[i].dropStudent(studentId);
			i = cSize;
			check = true;
		}

	}

	if(!check)
	   cout << "Course " << courseId << " does not exist." << endl;



}

void StudentReviewSystem::addGradeForm(const int courseId, const int formId, const double weight)
{
	bool check = false;

	GradeForm newForm = GradeForm(formId, weight);

	for (int i = 0; i < cSize; i++) {

		if (courseArray[i].getId() == courseId) {

			courseArray[i].addGradeForm(newForm);
			i = cSize;
			check = true;

		}

	}

	if (!check) 
		cout << "Course " << courseId << " does not exist." << endl;


}
