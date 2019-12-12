#pragma once
#include "Mammal.h"
class Dog :
	public Mammal
{
	static unsigned int count;
public:

	Dog(string c, double w);
	void print()  ;
	~Dog();
	static unsigned int GetCount() {
		return Dog::count;
	}

};

