#pragma once
#include <iostream>
using namespace std;
class Complex
{
	float Real, Image;
public:
	Complex(float r = 0, float i = 0);
	void Show();
	friend Complex operator *(Complex&, Complex&);
	Complex operator/(Complex&);
	Complex operator+(Complex&);
	//Complex operator-(Complex&);
	friend	Complex operator-(Complex&, Complex&);
};

