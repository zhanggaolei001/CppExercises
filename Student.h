#pragma once 
#include <iostream>

class Student
{
public:
	std::string Name;
	int Age;
	int Number;
	void SetName(std::string name);
	void SetAge(int age);
	void SetGrade(int number);
	Student(std::string name,int age,int number);
	~Student();
};

