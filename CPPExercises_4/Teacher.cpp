#include "Teacher.h"

std::string Teacher::Display()
{ 
	return Name +",部门:"+ Department;
}

Teacher::~Teacher()
{
	cout << "Teacher 析构了";
}
