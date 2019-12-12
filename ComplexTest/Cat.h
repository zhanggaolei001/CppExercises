#pragma once
#include "Mammal.h"
class Cat :
	public Mammal
{  
	static unsigned int count;
public:

	Cat(string c, double w);
	void print();
	~Cat();
	static unsigned int GetCount();
};

