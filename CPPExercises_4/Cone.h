#pragma once
#include "CircleBase.h"
class Cone :public CircleBase
{
	//母线长度,可换算为圆锥高度.构造函数使用母线长度和半径.
	double L;
public: 
	double GetArea() override;
	double GetVolume() override;
	Cone(double r,double l);
};

