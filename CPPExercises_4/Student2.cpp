#include "Student2.h"
#include <strstream>

string Student2::Display()
{
	string str = "";
	strstream ss;
	ss << ClassOfGrade;
	ss >> str;
	return Name + ",ѧ��:" + str;
}

Student2::~Student2()
{
	cout << "Student2 ������";
}
