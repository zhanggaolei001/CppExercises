#pragma once
#include "Shape.h"
class Square :
	public Shape
{
	float S;
public:
	Square(float a);
	float Area() override;
	void Setdata(float w, float h = 0) override;

};

