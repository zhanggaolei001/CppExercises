#include "1-3-zhanggaolei.h"
bool is_primer(int i) {
 //优化方案:https://blog.csdn.net/qq_33061377/article/details/53047458
	int max = i;
	for (int j = 2; j*j < max; j++)
	{
		if (i % j == 0)
		{
			return false;
		} 

	}
	return true;
}