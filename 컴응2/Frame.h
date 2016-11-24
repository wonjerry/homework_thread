#pragma once
#include <iostream>

using namespace std;

class Frame
{
private:
	int a, b;
public:
	Frame();
	~Frame();

	void* operator new(size_t size);
	void* operator new[](size_t size);

	void operator delete(void* addr);
	void operator delete[](void* addr);
};

