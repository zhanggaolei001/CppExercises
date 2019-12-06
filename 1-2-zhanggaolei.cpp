#include "1-2-zhanggaolei.h"
int factorial(int i) {
	if (i > 1)
	{
		return	i*factorial(i - 1);
	}
	else
	{
		return i ;
	}

}