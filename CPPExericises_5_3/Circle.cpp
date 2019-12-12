#include "Circle.h"

Circle::Circle(float r)
{
	R = r;
}

float Circle::Area()
{
	return 3.1415926*R*R;
}

void Circle::Setdata(float w, float h)
{
	R = w;
}
