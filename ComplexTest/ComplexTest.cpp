// ComplexTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "Complex.h"
#include "ComplexTest.h"
#include "Mammal.h"
#include "Dog.h"
#include "Cat.h"

	void Test5_1()
{
	Complex* c1 = new Complex(1, 2);
	Complex* c2 = new Complex(3, 4);
	auto he = *c1 + *c2;
	auto cha = *c1 - *c2;
	he.Show();
	cha.Show();
}

void main()
{
	//Test5_1();
	Test5_2();
}

void Test5_2()
{
	Dog* dog = new Dog("yellow", 10);
	Dog dog1("blue", 9);
	Dog dog12("blue", 9);
	Dog dog13("blue", 9);
	Dog* dog2 = new Dog("blue", 9);
	Dog* dog3 = new Dog("blue", 9);
	Dog* dog4 = new Dog("blue", 9);
	Cat* cat = new Cat("write", 8);
	dog->print();
	cout << "狗的数量为:" << Dog::GetCount() << endl;
	delete(dog2);
	cout << "删除delete一个指针后,狗的数量为:" << Dog::GetCount() << endl;
	cat->print();
	cout << "Main Function Ends";
	cout << "狗的数量为:" << Dog::GetCount() << endl;
}

 