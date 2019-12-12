#include "Cone.h"
#include "math.h"
//Բ׶
double Cone::GetArea()
{
	//S=2πr（r+h）
	double h = sqrt(L * L - R * R);
	return 2 * Pi * R * (R+h);
}

double Cone::GetVolume()
{
	//V=1/3Sh
	double S = Pi*R*R;
	double h = sqrt(L * L - R * R);
	double V = S * h/ 3 ;
	return V;
}

Cone::Cone(double r, double l)
{
	if (r*l<=0)
	{
		throw "半径和母线长度应均为非负实数";
	}
	R = r;
	L = l;
}

 