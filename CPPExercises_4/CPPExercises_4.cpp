// CPPExercises_4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Student2.h"
#include "Teacher.h"

#include "Cone.h"
#include "Cylinder.h"
#include "Sphere.h"
void test4_1() {
	auto  zhangsan = Student2();
	auto ptr = &zhangsan;
	ptr->SetName("zhangsan");
	ptr->SetNumber(10086);
	ptr->Score = 99;
	ptr->ClassOfGrade = 10;
	cout << ptr->Display().c_str();

	Teacher lilaoshi = Teacher();
	lilaoshi.SetName("李老师");
	lilaoshi.Department = "数学组";
	cout << lilaoshi.Display().c_str();
}
void test4_2() {
	Cone* cone = new Cone(2,3);
	Cylinder* cylinder = new Cylinder(2, 3);
	Sphere* sphere = new Sphere(2);
	cout<< "cone的面积为:"<<cone->GetArea()<<endl;
	cout << "cylinder的面积为:" << cylinder->GetArea() << endl;
	cout << "sphere的面积为:" << sphere->GetArea() << endl;
	cout << "cone的体积为:" << cone->GetVolume() << endl;
	cout << "cylinder的体积为:" << cylinder->GetVolume() << endl;
	cout << "sphere的体积为:" << sphere->GetVolume() << endl; 
}
void main()
{
	 //test4_1();
	test4_2();

}