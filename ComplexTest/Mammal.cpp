#include "Mammal.h"

Mammal::Mammal(string c, double w)
{
	color = c; weight = w;
}

Mammal::Mammal()
{
	color = "";
	weight = 0;
}

void Mammal::print()
{
	cout << "Mamml's Print Function~\n";
}
