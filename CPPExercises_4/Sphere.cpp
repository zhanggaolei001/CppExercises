#include "Sphere.h"

double Sphere::GetArea()
{ 
	return 4 * Pi * R * R;
}

double Sphere::GetVolume()
{
	return   Pi * R * R * R * 4 / 3;
}

Sphere::Sphere(double r)
{
	if (r <= 0)
	{
		throw "�뾶ӦΪ�Ǹ�ʵ��!";
	}
	R = r;
}
