#pragma once
#include <iostream>
#include <process.h>
#include "KeyEvent.h"

using namespace std;

unsigned int __stdcall mythread(void*) {
	int i=0;
	while (1) {
		cout << GetCurrentThreadId() << ": " << i++ << endl;
		Sleep(500);
	}
}

unsigned int __stdcall keyEvent(void*) {
	KeyEvent k;
	int i;
	while (1) {
		i = k.getKey();
		switch (i) {
		case 37: cout << "Left" << endl; break;
		case 38: cout << "Up" << endl; break;
		case 39: cout << "Right" << endl; break;
		case 40: cout << "Down" << endl; break;
		}
	}
}
int main() {
	HANDLE handleA, handleB;

	handleA = (HANDLE)_beginthreadex(0, 0, &mythread, (void*)0, 0, 0);
	handleB = (HANDLE)_beginthreadex(0, 0, &keyEvent, (void*)0, 0, 0);

	WaitForSingleObject(handleA, INFINITE);
	WaitForSingleObject(handleB, INFINITE);

	CloseHandle(handleA);
	CloseHandle(handleB);

	return 0;
}

