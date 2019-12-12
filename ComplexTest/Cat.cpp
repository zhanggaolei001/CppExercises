#include "Cat.h"
unsigned int Cat::count;
Cat::Cat(string c, double w):Mammal(c,w)
{
	count++;
}

void Cat::print()
{
	cout << "Cat:Color" << color << "Weight:" << weight << endl;
}

Cat::~Cat()
{
	count--;
}

unsigned int Cat::GetCount()
{
	return Cat::count;
}

 
