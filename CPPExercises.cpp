// CPPExercises.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iostream>
#include <stdio.h> 
#include "CPPExercises.h"
#include "1-1-zhanggaolei.h" 
#include "1-2-zhanggaolei.h"
#include "1-3-zhanggaolei.h"
#include "1-4-zhanggaolei.h"
#include "1-5-zhanggaolei.h" 
#include "2-1-zhanggaolei.h"
#include "2-2-zhanggaolei.h"
#include "2-3-zhanggaolei.h"
#include "Circle.h"
#include <time.h>
#include <string> 
#include "Student.h"
#include "Date.h"
using namespace std;
void test1_1()
{
	int x = 1, y = 2;
	cout << "初始值           :x=1,y=2\n" << "调用swap1后的结果:";
	swap1(x, y);
	cout << "x=" << x << ",y=" << y;

	cout << "\n调用swap2后的结果:";
	swap2(x, y);
	cout << "x=" << x << ",y=" << y << "\n";
}
void test1_2()
{
	cout << "please enter one integer: \n";
	int i = 0;
	cin >> i;
	int re = factorial(i);
	cout << i << "'s factorial is:" << re << "\n";
}
void test1_3()
{
	cout << "please enter one integer: \n";
	int i = 0;
	cin >> i;
	bool re = is_primer(i);
	if (re)
	{
		cout << i << " is primer" << "\n";
	}
	else
	{
		cout << i << " is not primer" << "\n";
	}
}
void test1_4()
{
	double a, b, c, d;
	cout << "\nplease enter the first number: \n";
	cin >> a;
	cout << "\nplease enter the second number:\n";
	cin >> b;
	cout << "\nplease enter the third number: \n";
	cin >> c;
	cout << "\nplease enter the forth number: \n";
	cin >> d;
	double re = cal_avrange(a, b, c, d);
	cout << "\nfour number you have input were:" << a << "," << b << "," << c << "," << d << " ,there average value is " << re << "\n";

}
void test1_5()
{

	int year, month, day;
	cout << "\nplease enter the number of year: \n";
	cin >> year;
	cout << "\nplease enter the number of month:\n";
	cin >> month;
	cout << "\nplease enter the number of day: \n";
	cin >> day;
	int n = get_day_of_year(year, month, day);
	cout << year << "年" << month << "月" << day << "日 is the " << n << " day of the year\n";


}
//get_polar_coordinates
void test2_1()
{

	double x, y;
	cout << "\nplease enter the number x: \n";
	cin >> x;
	cout << "\nplease enter the number y:\n";
	cin >> y;
	get_polar_coordinates_quote(x, y);
	cout << "\nget_polar_coordinates_quote(&x,&y):x=" << x << ",y=" << y;



	cout << "\nplease Re-enter the number x: \n";
	cin >> x;
	cout << "\nplease Re-enter the number y:\n";
	cin >> y;
	get_polar_coordinates(&x, &y);
	cout << "\nget_polar_coordinates(*x, *y):x=" << x << ",y=" << y;



	cout << "\nplease Re-enter the number x Again: \n";
	cin >> x;
	cout << "\nplease Re-enter the number y Again:\n";
	cin >> y;
	y = get_polar_coordinates_return_y_change_x(&x, y);
	cout << "\nget_polar_coordinates_return_y_change_x(&x, y):x=" << x << ",y=" << y;
}
void test2_2()
{
	const int length = 100;
	char c[length];
	cout << "please input a string(max length:10)" << endl;
	cin.getline(&c[0], length);
	cout << c;

	int count_of_a_Z = 0, count_of_white_space = 0, count_of_0_9 = 0, count_of_other = 0;
	analysis(&c[0], count_of_a_Z, count_of_white_space, count_of_0_9, count_of_other);
	cout << endl;
	cout << "输入的字母数:" << count_of_a_Z << endl;
	cout << "输入的空格数:" << count_of_white_space << endl;
	cout << "输入的数字数:" << count_of_0_9 << endl;
	cout << "其他字符数量:" << count_of_other << endl;
}
void test2_3() {
	srand(time(0));

	const int length = 10;// rand();
	float arr[length];
	srand(time(0));
	cout << "随机数据:" << endl;

	for (size_t i = 0; i < length; i++)
	{
		arr[i] = (float)rand() / 3;
		cout << arr[i] << ",";
	}
	cout << endl;
	int max_index = 0;
	int min_index = 0;
	get_max_min(arr, length, max_index, min_index);
	cout << "最大值:" << arr[max_index] << endl;
	cout << "最小值:" << arr[min_index] << endl;
	cout << "最大值索引:" << max_index << endl;
	cout << "最小值索引:" << min_index << endl;

}
void test3_1() {
	double R = 0;
	cout << "请输入圆的半径R" << endl;
	cin >> R;
	Circle* c = new Circle(R);
	cout << "使用成员函数面积:" << c->GetArea() << endl;
	auto area = GetArea(*c);
	cout << "使用友元函数计算面积:" << c->GetArea() << endl;

}

void test3_2() {
	string name;
	int age;
	int grade;
	cout << "请输入学生姓名:" << endl;
	getline(cin, name, '\n');
	cout << "请输入年龄:" << endl;
	cin >> age;
	cout << "请输入学号:" << endl;
	cin >> grade;
	Student s = Student(name, age, grade);  
	cout << "使用成员函数修改学生姓名为\"李四\""<<endl;
	s.SetName("李四");
}
void test3_3() {
	Date d =Date();
	cout << "请输入一个日期(格式:2019 12 07):" << endl;
	cin >> d;
	cout << d;
	cout << "============================================" << endl;

}
int main()
{	//声明:各函数对输入正确性的异常不做处理
	//取消注释,对某个实验进行测试.
	//test1_1();
	//test1_2();
	//test1_3();
	//test1_4();
	//test1_5();
	//test2_1();
	//test2_2();
	//test2_3();
	//test3_1();
	//test3_2();
	test3_3();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
