#include "1-1-zhanggaolei.h"
//值引用
void swap1(int x, int y) {
	int tem = x;
	x = y;
	y = tem;
}
//指针引用,地址引用
void swap2(int& x, int& y) {
	int tem = x;
	x = y;
	y = tem;
}