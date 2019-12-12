#include "Cylinder.h"
//Բ��
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
		throw "�뾶�͸߶�Ӧ��Ϊ�Ǹ�ʵ��";
	}
	R = r;
	H = h;
}
