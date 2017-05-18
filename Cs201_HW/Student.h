#include <iostream>
using namespace std;

class Student {


private:

	int stuId;
	string stuName;
	int grade;

public:

	Student(const int, const string);
	Student(const int);
	Student();
	void setGrade(const int);
	int getGrade(const int);
	int getStudentId();
	string getStudentName();




};
