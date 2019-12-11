#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	unsigned int ClassOfGrade;
	unsigned int Score;
	std::string Display() override;
};

