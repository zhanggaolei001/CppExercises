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
#include <time.h>
void test1_1()
{
	int x = 1, y = 2;
	std::cout << "初始值           :x=1,y=2\n" << "调用swap1后的结果:";
	swap1(x, y);
	std::cout << "x=" << x << ",y=" << y;

	std::cout << "\n调用swap2后的结果:";
	swap2(x, y);
	std::cout << "x=" << x << ",y=" << y << "\n";
}
void test1_2()
{
	std::cout << "please enter one integer: \n";
	int i = 0;
	std::cin >> i;
	int re = factorial(i);
	std::cout << i << "'s factorial is:" << re << "\n";
}
void test1_3()
{
	std::cout << "please enter one integer: \n";
	int i = 0;
	std::cin >> i;
	bool re = is_primer(i);
	if (re)
	{
		std::cout << i << " is primer" << "\n";
	}
	else
	{
		std::cout << i << " is not primer" << "\n";
	}
}
void test1_4()
{
	double a, b, c, d;
	std::cout << "\nplease enter the first number: \n";
	std::cin >> a;
	std::cout << "\nplease enter the second number:\n";
	std::cin >> b;
	std::cout << "\nplease enter the third number: \n";
	std::cin >> c;
	std::cout << "\nplease enter the forth number: \n";
	std::cin >> d;
	double re = cal_avrange(a, b, c, d);
	std::cout << "\nfour number you have input were:" << a << "," << b << "," << c << "," << d << " ,there average value is " << re << "\n";

}
void test1_5()
{

	int year, month, day;
	std::cout << "\nplease enter the number of year: \n";
	std::cin >> year;
	std::cout << "\nplease enter the number of month:\n";
	std::cin >> month;
	std::cout << "\nplease enter the number of day: \n";
	std::cin >> day;
	int n = get_day_of_year(year, month, day);
	std::cout << year << "年" << month << "月" << day << "日 is the " << n << " day of the year\n";


}
//get_polar_coordinates
void test2_1()
{

	double x, y;
	std::cout << "\nplease enter the number x: \n";
	std::cin >> x;
	std::cout << "\nplease enter the number y:\n";
	std::cin >> y;
	get_polar_coordinates_quote(x, y);
	std::cout << "\nget_polar_coordinates_quote(&x,&y):x=" << x << ",y=" << y;



	std::cout << "\nplease Re-enter the number x: \n";
	std::cin >> x;
	std::cout << "\nplease Re-enter the number y:\n";
	std::cin >> y;
	get_polar_coordinates(&x, &y);
	std::cout << "\nget_polar_coordinates(*x, *y):x=" << x << ",y=" << y;



	std::cout << "\nplease Re-enter the number x Again: \n";
	std::cin >> x;
	std::cout << "\nplease Re-enter the number y Again:\n";
	std::cin >> y;
	y = get_polar_coordinates_return_y_change_x(&x, y);
	std::cout << "\nget_polar_coordinates_return_y_change_x(&x, y):x=" << x << ",y=" << y;
}
void test2_2()
{
	const int length = 100;
	char c[length];
	std::cout << "please input a string(max length:10)" << std::endl;
	std::cin.getline(&c[0], length);
	std::cout << c;

	int count_of_a_Z = 0, count_of_white_space = 0, count_of_0_9 = 0, count_of_other = 0;
	analysis(&c[0], count_of_a_Z, count_of_white_space, count_of_0_9, count_of_other);
	std::cout << std::endl;
	std::cout << "输入的字母数:" << count_of_a_Z << std::endl;
	std::cout << "输入的空格数:" << count_of_white_space << std::endl;
	std::cout << "输入的数字数:" << count_of_0_9 << std::endl;
	std::cout << "其他字符数量:" << count_of_other << std::endl;
}
void test2_3() {
	srand(time(0));

	const int length = 10;// rand();
	float arr[length];
	srand(time(0));
	std::cout << "随机数据:" << std::endl;

	for (size_t i = 0; i < length; i++)
	{
		arr[i] = (float)rand() / 3;
		std::cout << arr[i] << ",";
	}
	std::cout << std::endl;
	int max_index = 0;
	int min_index = 0;
	get_max_min(arr, length, max_index, min_index);
	std::cout << "最大值:" << arr[max_index] << std::endl;
	std::cout << "最小值:" << arr[min_index] << std::endl;
	std::cout << "最大值索引:" << max_index << std::endl;
	std::cout << "最小值索引:" << min_index << std::endl;

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
	test2_3();
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
