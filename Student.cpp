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
	std::cout << "����:" << Name << std::endl;
	std::cout << "����:" << Age << std::endl;
	std::cout << "ѧ��:" << Number << std::endl;
	std::cout << "�������"<< std::endl;

}
