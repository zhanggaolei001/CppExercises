// CPPExericises_5_3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#pragma once
#include <iostream>
#include "Compute.h"

void main()
{
	Compute a;
	std::cout << "四种几何图形的面积=" << a.SumArea() << std::endl;
	a.Setdata(2, 10);
	std::cout << "四种几何图形的面积=" << a.SumArea() << std::endl;
	a.Setdata(0, 10,12);
	std::cout << "四种几何图形的面积=" << a.SumArea() << std::endl;
	a.Setdata(1,2, 5);
	std::cout << "四种几何图形的面积=" << a.SumArea() << std::endl;
	a.Setdata(3,15.5, 10);
	std::cout << "四种几何图形的面积=" << a.SumArea() << std::endl;
 
}

 