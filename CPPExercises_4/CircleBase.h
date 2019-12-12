#ifndef _CIRCLE_BASE_H_
#define _CIRCLE_BASE_H_
class CircleBase
{
protected:
	const double Pi = 3.14;
public:
	double R;
	virtual double GetArea() = 0;
	virtual double GetVolume() = 0;
};

#endif // !_CIRCLE_BASE_H_

