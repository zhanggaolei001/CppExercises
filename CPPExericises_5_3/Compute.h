#pragma once
#include "Shape.h"

class Compute
{
	Shape**s;
public:
	Compute();
	float SumArea();
	~Compute();
	void Setdata(int n, float a, float b = 0);
};

