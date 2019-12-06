#include "2-2-zhanggaolei.h"

void analysis(const char* str, int& count_of_a_Z, int& count_of_white_space, int& count_of_0_9, int& count_of_other) {
	
	while (*str)
	{
		if (*str >= 48 && *str <= 57)
		{
			count_of_0_9++;
		}
		else if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
		 {
			count_of_a_Z++;
		}
		else if (*str == 32)
		{
			count_of_white_space++;
		}
		else
		{
			count_of_other++;
		} 
		*str++;
	}
}