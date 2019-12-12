#pragma once
#include "CircleBase.h"
 class Sphere :public CircleBase
{
public:
	double GetArea() ;
	double GetVolume() ;
	Sphere(double r);
};

