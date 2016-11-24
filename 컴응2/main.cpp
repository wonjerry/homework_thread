#pragma once
#include <iostream>
#include <process.h>
#include <string>
#include "Frame.h"

using namespace std;


int main() {

	try {
		Frame *f1 = new Frame;
		Frame *f2 = new Frame[10];

		delete f1;
		delete[] f2;
	}
	catch (string msg) {
		cout << "Error msg : " << msg << endl;
	}
	return 0;
}

