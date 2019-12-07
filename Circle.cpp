#include "Circle.h"

double Circle::GetArea()
{
	return PI * R * R;
}

double Circle::GetPerimeter()
{
	return 2*PI*R;
}

Circle::Circle(double r)
{
	R = r;
}

double GetArea(Circle c)
{
	return c.PI * c.R *c.R;
}
