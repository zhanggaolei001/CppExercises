#include "Student.h"  
void Student::SetName(std::string name)
{
	Name = name;
}
void Student::SetAge(int age)
{
	Age = age;
}
void Student::SetGrade(int number)
{
	Number = number;
}
Student::Student(std::string name, int age, int number)
{
	Name = name;
	Age = age;
	Number = number;
}

Student::~Student()
{
	std::cout << "姓名:" << Name << std::endl;
	std::cout << "年龄:" << Age << std::endl;
	std::cout << "学号:" << Number << std::endl;
	std::cout << "析构完成"<< std::endl;

}
