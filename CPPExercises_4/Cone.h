#pragma once
#include "CircleBase.h"
class Cone :public CircleBase
{
	//ĸ�߳���,�ɻ���ΪԲ׶�߶�.���캯��ʹ��ĸ�߳��ȺͰ뾶.
	double L;
public: 
	double GetArea() override;
	double GetVolume() override;
	Cone(double r,double l);
};

