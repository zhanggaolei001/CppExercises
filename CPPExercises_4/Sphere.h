#pragma once
#include "CircleBase.h"
class Sphere :
	public CircleBase
{
public:
	double GetArea() override;
	int GetVolume() override;
};

