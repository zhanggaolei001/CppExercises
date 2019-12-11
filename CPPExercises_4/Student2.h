#pragma once
#include "Person.h"
class Student2 :
	public Person
{
public:
	unsigned int ClassOfGrade;
	unsigned int Score;
	std::string Display() override;
	~Student2();
};

