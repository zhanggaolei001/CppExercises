#include "Rectangle.h"

float Rectangle::Area()
{
	return W*H;
}

void Rectangle::Setdata(float w, float h)
{
	W = w; H = h;
}
