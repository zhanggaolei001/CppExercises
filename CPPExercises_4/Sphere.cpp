#include "Sphere.h"

double Sphere::GetArea()
{
	return 4 * Pi * R * R;
}

double Sphere::GetVolume()
{
	return 4 / 3 * Pi * R * R * R;
}
