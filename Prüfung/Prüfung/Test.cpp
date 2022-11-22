#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#pragma warning<disable:4996>
using namespace std;

int A(int*, int);

int A(int* a, int length) {
	for (int i = 0; i < length; i++) {
		*a = i;
		a++;
		cout << i << endl;
	}
	return 0;
}

int main() {
	int b[10];
	A(&b[10], 10);
	//A(b, 10);
	return 0;
}