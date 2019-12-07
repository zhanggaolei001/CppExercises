#include "2-3-zhanggaolei.h"
#include "math.h" 
void get_max_min(const float *data_arr,const int size,int& max_index,int& min_index) {
	float max=0; float min=0; 
	for (int i = 0; i< size; i++)
	{ 
		if (data_arr[i]>max)
		{
			max = data_arr[i];
			max_index = i;
		}
		if (data_arr[i] <min||min==0)
		{
			min = data_arr[i];
			min_index = i;
		} 
	}
}