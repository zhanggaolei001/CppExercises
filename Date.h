#pragma once
#include <iostream>
using namespace std;
class Date
{
public:
	int Year;
	int Month;
	int Day;
	void SetDate(int year, int month, int day);
	void SetYear(int year);
	void SetMonth(int month);
	void SetDay(int day);
	void AddMonth(int month);
	void AddDay(int day);
	friend istream& operator>>(istream& in, Date& A);
	friend ostream& operator<<(ostream& out, Date& A);
};

