#include <iostream>
#include "Course.h"
using namespace std;

class StudentReviewSystem {
private:
	Course* courseArray;
	int cSize;
	


public:
	StudentReviewSystem();
	~StudentReviewSystem();
	void addCourse(const int courseId, const string courseName);
	void deleteCourse(const int courseId);
	void addStudent(const int courseId, const int studentId, const string studentName);
	void dropStudent(const int courseId, const int studentId);
	void addGradeForm(const int courseId, const int formId, const double weight);
	void deleteGradeForm(const int courseId, const int formId);
	void showAllCourses();
	void showCourse(const int courseId);
	void showStudent(const int studentId);
};