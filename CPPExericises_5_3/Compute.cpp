#pragma once
#include "Compute.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"


Compute::Compute()
{
	s = new Shape*[4];
	s[0] = new Triangle(3, 4);
	s[1] = new Rectangle(6, 8);
	s[2] = new Square(6.5);
	s[3] = new Circle(5.5);
}

float Compute::SumArea()
{
	float sum = 0;
	for (int i=0;i<4;i++)
	{
		sum += s[i]->Area();
	}
	return sum;
}


Compute::~Compute()
{
	for (int i = 0; i<4; i++)
	{
		delete s[i];
	}
	delete[]s;
}

void Compute::Setdata(int n, float a, float b)
{
	s[n]->Setdata(a, b);
}
