#pragma once
#include "CircleBase.h"
class Sphere :
	public CircleBase
{
public:
	double GetArea() override;
	double GetVolume() override;
};

