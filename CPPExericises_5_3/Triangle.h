#pragma once
#include "Shape.h"
class Triangle : public Shape
{
	float W, H;
public:
	Triangle(float w = 0, float h = 0);
	float Area(void) override;
	void Setdata(float w, float h = 0) override;
	
};

