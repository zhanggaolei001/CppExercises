#pragma once
#include "CircleBase.h"
class Cone :
	public CircleBase
{
public:
	double H;
	double GetArea() override;
	double GetVolume() override;
};

