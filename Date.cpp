#include "Date.h"

istream& operator>>(istream& in, Date& A)
{
	in >> A.Year >> A.Month>>A.Day;
	return in; 
}

ostream& operator<<(ostream& out, Date& A)
{
	out << A.Year << "年" << A.Month << "月" << A.Day << "日";
	return out; 
}

void Date::SetDate(int year, int month, int day)
{
	Year = year;
	Month = month;
	Day = day;
}

void Date::SetYear(int year)
{
	Year = year;
}

void Date::SetMonth(int month)
{
	//忽略对数据异常的处理,如输入大于12.
	Month = month;
}

void Date::SetDay(int day)
{
	//忽略对数据异常的处理,如输入大于31. 
	Day = day;
}

void Date::AddMonth(int month)
{
	Month += month;
	while (Month>12)
	{
		Year += 1;
		Month -= 12;
	}
}

void Date::AddDay(int day)
{
	Day += day;
	//简化处理逻辑:每月只有30天,完整逻辑应对每月有多少天进行计算,然后作为判定进位的条件.
	while (Day>30)
	{
		AddMonth(1);
		Day-=30;
	}
}
