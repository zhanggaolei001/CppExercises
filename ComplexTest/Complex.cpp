#include "Complex.h" 

Complex::Complex(float r, float i)
{
	Real = r; Image = i;
}

void Complex::Show()
{
	cout << "Real=" << Real << '\t' << "Image=" << Image << '\n';
}

Complex Complex::operator/(Complex& c)
{
	Complex t;
	t.Real = (Real * c.Real + Image * c.Image) / (c.Real * c.Real + c.Image * c.Image);
	t.Image = (Image * c.Real - Real * c.Image) / (c.Real * c.Real + c.Image * c.Image);
	return t;
}

Complex Complex::operator+(Complex& c)
{
	Complex t;
	t.Real = Real + c.Real;
	t.Image = Image + c.Image;
	return t;
}

//Complex Complex::operator-(Complex& c)
//{
//	Complex t;
//
//	t.Real = Real - c.Real;
//	t.Image = Image - c.Image;
//	return t;
//}

Complex operator*(Complex& c1, Complex& c2)
{
	Complex t;
	t.Real = c1.Real * c2.Real - c1.Image * c2.Image;
	t.Image = c1.Image * c2.Real + c1.Real * c2.Image;
	return t;
}

Complex operator-(Complex& c1, Complex& c2)
{
	Complex t;
	t.Real = c1.Real - c2.Real;
	t.Image = c1.Image - c2.Image;
	return t;
}



