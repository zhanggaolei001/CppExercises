#include "Teacher.h"

std::string Teacher::Display()
{ 
	return Name +",����:"+ Department;
}

Teacher::~Teacher()
{
	cout << "Teacher ������";
}
