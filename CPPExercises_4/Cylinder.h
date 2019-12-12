#pragma once
#include "CircleBase.h"
class Cylinder :
	public CircleBase
{
	double H;
public:
	double GetArea() override;
	double GetVolume() override;
};

