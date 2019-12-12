#pragma once
class Circle 
{

private:
	double R;
	const	double PI = 3.14;
public:
	double GetArea();
	friend double GetArea(Circle c);
	double GetPerimeter();
	Circle(double r);
};

