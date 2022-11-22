#include <iostream>
using namespace std;

int mult(int a, int b) {
	return a + b;
}

int mult(int a, int b, int c) {
	return a + b + c;
}

int mult(double a, double b) {
	return a + b;
}

int main() {
	int i = mult(2, 3);
	int j = mult(2, 3, 4);
	int k = mult(2.0, 3.0);

	cout << i << endl << j << endl << k << endl;

	return 0;
}