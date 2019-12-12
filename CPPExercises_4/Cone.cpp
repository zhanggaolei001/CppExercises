#include "Cone.h"
//Բ׶
double Cone::GetArea()
{
	//S=2πr（r+h）
	return 2 * Pi * R * (R+H);
}

double Cone::GetVolume()
{
	//V=1/3Sh
	double S = Pi*R*R;
	double V = 1 / 3 * S * H;
	return V;
}
