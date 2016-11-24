#pragma once
#include <iostream>

using namespace std;

template<class T>
class ExArray
{
private :
	T* a;
	int size;
public:
	ExArray() {

	}
	ExArray(int s) {
		a = new T[size = s];
	}
	~ExArray() {

	}

	void addData(T data) {
		for (int i = 0; i < size; i++) {
			a[i] = data;
		}
	}
	void printData() {
		for (int i = 0; i < size; i++) {
			cout << a[i] << ",";

		}
		cout << endl;
	}
};



