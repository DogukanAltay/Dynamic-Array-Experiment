#include <iostream>
using namespace std;

class GradeForm {

private:

	int formId;
	double weight;


public:
	
	int getId();
	double getWeight();
	GradeForm(const int id, const double weight);
	GradeForm();



};
