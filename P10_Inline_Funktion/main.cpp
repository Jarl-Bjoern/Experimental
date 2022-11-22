#include <iostream>
using namespace std;

inline void swap(float& a, float& b) {
	float temp;
	cout << a << endl << b << endl;
	temp = a; a = b; b = temp;
	cout << a << endl << b << endl;
}

int main() {
	float x = 1.5, y = 3.3;
	swap(x, y);

	return 0;
}