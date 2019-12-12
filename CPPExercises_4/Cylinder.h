#pragma once
#include "CircleBase.h"
class Cylinder : public CircleBase
{ 
	double H;
public:
	double GetArea() ;
	double GetVolume() ;
	Cylinder(double r, double h);
};

