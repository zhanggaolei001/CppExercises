#include "1-1-zhanggaolei.h"
//ֵ����
void swap1(int x, int y) {
	int tem = x;
	x = y;
	y = tem;
}
//ָ������,��ַ����
void swap2(int& x, int& y) {
	int tem = x;
	x = y;
	y = tem;
}