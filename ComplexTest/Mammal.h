#pragma once
#include <string>
#include <iostream>
using namespace std;
class Mammal
{
public:
	string color;
	double weight;
	Mammal(string c, double w);
	Mammal();
	virtual void print();  
};

