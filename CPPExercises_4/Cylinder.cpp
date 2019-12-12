#include "Cylinder.h"
//圆柱
double Cylinder::GetArea()
{
	return	2 * Pi * R * H +2* Pi * R * R;
}

double Cylinder::GetVolume()
{
	return Pi * R * R * H;
}

Cylinder::Cylinder(double r, double h)
{
	if (r * h <= 0)
	{
		throw "半径和高度应均为非负实数";
	}
	R = r;
	H = h;
}
