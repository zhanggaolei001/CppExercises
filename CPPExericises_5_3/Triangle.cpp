#include "Triangle.h"

float Triangle::Area()
{
	return W*H / 2;
}

void Triangle::Setdata(float w, float h)
{
	W = w; H = h;
}
