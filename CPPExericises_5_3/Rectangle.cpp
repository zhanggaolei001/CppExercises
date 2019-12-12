#pragma once
#include "Rectangle.h"

Rectangle::Rectangle(float w, float h)
{
	W = w; H = h;
}

float Rectangle::Area()
{
	return W*H;
}

void Rectangle::Setdata(float w, float h)
{
	W = w; H = h;
}
