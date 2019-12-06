#include "1-5-zhanggaolei.h" 

int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int months_leap[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
bool is_leap_year(int year) {
	if (year % 4 == 0)
	{
		return true;
	}return false;
}
int  get_day_of_year(int year, int month, int day) {
	int* ms;
	if (is_leap_year(year)) {
		ms = months_leap; 
	}
	else
	{
		ms = months; 
	}	
	int days = 0;
	for (int i = 0; i < month; i++)
	{
		days += ms[month];
	}
	days += day;
	return days;
} //判定是否为闰年
