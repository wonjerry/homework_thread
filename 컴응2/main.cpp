#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <map>
//#include "ExArray.h"
//#include "Frame.h"


using namespace std;


template<typename T>
void mySwap(T& num1, T& num2) {
	T temp = num1;
	num1 = num2;
	num2 = temp;
}


void dump(list<string> &l) {
	list<string>::iterator iter = l.begin();

	while (iter != l.end()) {
		cout << *iter << endl;
		iter++;
	}
}

int main() {
	/*프레임입니다
	try {
		Frame *f1 = new Frame;
		Frame *f2 = new Frame[10];

		delete f1;
		delete[] f2;
	}
	catch (string msg) {
		cout << "Error msg : " << msg << endl;
	}*/

	/*ExArray<int> arr1(3);
	ExArray<char> arr2(4);
	ExArray<double> arr3(5);

	arr1.addData(2);
	arr2.addData('A');
	arr3.addData(32.12);

	arr1.printData();
	arr2.printData();
	arr3.printData();

	int num1 = 10, num2 = 40;
	cout << "Before : " << num1 << ", " << num2 << endl;
	mySwap<int>(num1, num2);
	cout << "after : " << num1 << ", " << num2 << endl;

	double num11 = 121.11, num12 = 10.5;
	cout << "Before : " << num1 << ", " << num2 << endl;
	mySwap<double>(num11, num12);
	cout << "after : " << num1 << ", " << num2 << endl;

	ExArray<int> arr4(5);
	arr4.addData(10);

	mySwap<ExArray<int>>(arr1, arr4);
	arr1.printData();
	arr4.printData();*/

	/*vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.insert(v.begin(), 40);
	v.insert(v.end(), 50);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	cout << "access index at 1 : " << v.at(1) << endl;

	v.erase(v.begin());
	v.erase(v.end() - 1);

	vector<int>::iterator iter = v.begin();

	cout << "access index at 1 with iter : " << iter[1] << endl;

	while (iter != v.end()) {
		cout << *iter << endl;
		iter++;
	}*/

	/*list<string> names;
	names.insert(names.begin(), "konkuk");
	names.insert(names.end(), "University");
	names.insert(names.end(), "SClab");
	names.insert(names.end(), "CSY");
	dump(names);

	cout << "===" << endl;

	names.reverse();
	dump(names);*/

	map<string, int>m;
	m["seoul"] = 100;
	m["daegu"] = 120;
	m["busan"] = 200;

	cout << "Train to seoul = " << m["seoul"] << "$" << endl;
	cout << "Train to deagu = " << m["daegu"] << "$" << endl;
	cout << "Train to busan = " << m["busan"] << "$" << endl;

	return 0;
}

