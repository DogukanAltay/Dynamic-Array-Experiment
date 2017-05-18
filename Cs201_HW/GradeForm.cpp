#include "GradeForm.h"

int GradeForm::getId()
{
	return formId;
}

double GradeForm::getWeight()
{
	return weight;
}

GradeForm::GradeForm(const int id, const double effect)
{
	formId = id;
	weight = effect;
}

GradeForm::GradeForm()
{
	formId = 000;
	weight = 0.1;
}
