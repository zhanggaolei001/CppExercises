#include "Student2.h"
#include <strstream>

string Student2::Display()
{
	string str = "";
	strstream ss;
	ss << ClassOfGrade;
	ss >> str;
	return Name + ",Ñ§ºÅ:" + str;
}

Student2::~Student2()
{
	cout << "Student2 Îö¹¹ÁË";
}
