#include "Cylinder.h"
//Ô²Öù
double Cylinder::GetArea()
{
	return	2 * Pi * R * H + Pi * R * R;
}

double Cylinder::GetVolume()
{
	return Pi * R * R * H;
}
