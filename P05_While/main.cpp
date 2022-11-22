#include <iostream>

using namespace std;

// Variablen_Bereich
bool Programm_Beenden = false;
int i = 0;

int main() {
	while (Programm_Beenden != true) {
		if (i == 5) {
			Programm_Beenden = true;
		} else {
			i++;
			cout << i; cout << endl;
		}
	}

	return 0;
}