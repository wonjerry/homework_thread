#include "Frame.h"



Frame::Frame()
{
}


Frame::~Frame()
{
}

void * Frame::operator new(size_t size)
{
	cout << "Allocation with new operator.." << endl;
	void*temp = malloc(size);

	if (!temp) {
		throw string("bad allocation");
	}
	
	return temp;
}

void * Frame::operator new[](size_t size)
{
	cout << "Allocation with new[] operator.." << endl;
	void*temp = malloc(size);

	if (!temp) {
		throw string("bad allocation");
	}

	return temp;
}

void Frame::operator delete(void * addr)
{
	cout << "Free with delete operator.." << endl;
	free(addr);
}

void Frame::operator delete[](void * addr)
{
	cout << "Free with delete[] operator.." << endl;
	free(addr);
}
