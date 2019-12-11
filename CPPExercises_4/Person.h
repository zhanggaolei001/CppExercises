#pragma once
#include <iostream>
using namespace std;
 class Person
{
public:
	unsigned int Number;
	std::string Name;
	void SetName(std::string name);
	void SetNumber(unsigned int number);
	virtual std::string Display()=0;
	 
};