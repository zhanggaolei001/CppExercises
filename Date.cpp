#include "Date.h"

istream& operator>>(istream& in, Date& A)
{
	in >> A.Year >> A.Month>>A.Day;
	return in; 
}

ostream& operator<<(ostream& out, Date& A)
{
	out << A.Year << "��" << A.Month << "��" << A.Day << "��";
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
	//���Զ������쳣�Ĵ���,���������12.
	Month = month;
}

void Date::SetDay(int day)
{
	//���Զ������쳣�Ĵ���,���������31. 
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
	//�򻯴����߼�:ÿ��ֻ��30��,�����߼�Ӧ��ÿ���ж�������м���,Ȼ����Ϊ�ж���λ������.
	while (Day>30)
	{
		AddMonth(1);
		Day-=30;
	}
}
