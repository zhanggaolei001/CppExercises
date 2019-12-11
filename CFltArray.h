#pragma once
class CFltArray
{
public:
	void Resize(int new_size);
	float& operator[](int index);
	CFltArray& operator=(float* cfa);
	CFltArray(float* cfa, unsigned int nSize);
	CFltArray(const CFltArray& src);
	 
	int Size();

	~CFltArray();
  
private:
	int size;
	float* ptr;
};

