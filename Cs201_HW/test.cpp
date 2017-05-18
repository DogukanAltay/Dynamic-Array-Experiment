
#include "StudentReviewSystem.h"
#include <iostream>


int main() {

	StudentReviewSystem S;
	S.addCourse(101, "Algorithms and Programming");
	S.addCourse(201, "Fundamental Structures of Computer Science I");
	S.addCourse(223, "Digital Design");
	S.addCourse(224, "Computer Organization");
	S.addCourse(201, "Fundamental Structures of Computer Science I");
	S.deleteCourse(223);
	S.deleteCourse(102);
	cout << endl;
	S.addStudent(201, 1234, "Cigdem Gunduz Demir");
	S.addStudent(201, 4567, "Troya Cagil Koylu");
	S.addStudent(201, 891234, "Selim Aksoy");
	S.addStudent(201, 891234, "Can Fahrettin Koyuncu");
	S.addStudent(201, 5678, "Ercument Cicek");
	S.addStudent(224, 1234, "Cigdem Gunduz Demir");
	S.addStudent(351, 3456, "Necmi Acarsoy");
	S.dropStudent(224, 5678);
	S.dropStudent(202, 5678);
	S.dropStudent(201, 5678);
	cout << endl;
	S.addGradeForm(201, 1, 0.4); cout << endl;
	S.addGradeForm(201, 2, 0.2); cout << endl;
	S.addGradeForm(201, 3, 0.1); cout << endl;
	S.addGradeForm(201, 1, 0.1); cout << endl;
	S.addGradeForm(224, 1, 0.4); cout << endl;
	


	cin.get();
}
#pragma once