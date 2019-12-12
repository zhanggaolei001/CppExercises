#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
	float R;
public:
	Circle(float r = 0);
	float Area() override;
	void Setdata(float w, float h = 0) override;
};

