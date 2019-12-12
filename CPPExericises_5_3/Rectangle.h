#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
	float W, H;
public:
	Rectangle(float w = 0, float h = 0);
	float Area(void) override;
	void Setdata(float w, float h = 0) override;
};

