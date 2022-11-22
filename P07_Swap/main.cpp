#include <iostream>
using namespace std;

void swap(int& a, int b) {
	cout << a << endl;
	cout << b << endl;

	int temp = a;
	a = b;
	b = temp;

	cout << a << endl;
	cout << b << endl;
}

int main() {
	int x = 123, y = 456;

	swap(x, y);

	return 0;
}