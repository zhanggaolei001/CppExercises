#include "CFltArray.h" 


void CFltArray::Resize(int new_size)
{
	float* tm = ptr;//��ʱ�洢.
	size = new_size;
	if (new_size > size)				//����´�С�����
	{
		ptr = new float[new_size];		//����Ҫ��������һ���ڴ�
		*ptr = *tm;						//����ԭ�����ݸ�������
		delete tm;						//ɾ�����õ�.
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
//ǳ����
CFltArray& CFltArray::operator=(float* cfa)
{
	ptr = cfa;//ptrָ��,ָ��cfaָ��ָ���ַ:�ı�ptr��ָ���ַ����.
	return *this;
}

CFltArray::CFltArray(float* cfa, unsigned int nSize)
{
	size = nSize;
	ptr = new float[size];//����һ���ڴ�.
	*ptr = *cfa;//�������ݿ���,���
}




int CFltArray::Size()
{
	return size;
}
