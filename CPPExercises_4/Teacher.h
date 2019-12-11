#pragma once
#include "Person.h"
class Teacher :
	public Person
{
public:
	std::string Title;
	std::string Department;

	std::string Display() override;
};

