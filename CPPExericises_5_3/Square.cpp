#include "Square.h"

Square::Square(float a)
{
	S = a;
}

float Square::Area()
{
	return S*S;
}

void Square::Setdata(float w, float h)
{
	S = w;
}
