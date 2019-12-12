#include "Dog.h"
unsigned int Dog::count;
Dog::Dog(string c, double w):Mammal(c,w)
{ 
	count++;
}

 void Dog::print()
{
	cout << "Dog:Color" << color << "Weight:" << weight << endl;
}

Dog::~Dog()
{
	count--;
	cout << count<<endl;
}

 