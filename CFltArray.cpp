#include "CFltArray.h" 


void CFltArray::Resize(int new_size)
{
	float* tm = ptr;//临时存储.
	size = new_size;
	if (new_size > size)				//如果新大小变大了
	{
		ptr = new float[new_size];		//则需要重新申请一块内存
		*ptr = *tm;						//并将原来数据给拷过来
		delete tm;						//删除不用的.
	}
	size = new_size;
}

float& CFltArray::operator[](int index)
{
	if (index >= size)
	{
		throw "Error:the index is out-of range";
	}
	return ptr[index];
}
//浅拷贝
CFltArray& CFltArray::operator=(float* cfa)
{
	ptr = cfa;//ptr指针,指向cfa指针指向地址:改变ptr的指向地址而已.
	return *this;
}

CFltArray::CFltArray(float* cfa, unsigned int nSize)
{
	size = nSize;
	ptr = new float[size];//申请一块内存.
	*ptr = *cfa;//数据内容拷贝,深拷贝
}




int CFltArray::Size()
{
	return size;
}
