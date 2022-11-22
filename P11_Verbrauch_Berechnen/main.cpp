#include <iostream>
using namespace std;

float Preis = 0.5;
float Kilometer = 250;
float Benzinmenge = 50;

int main() {
	float Verbrauch, Kosten;
	Verbrauch = 100 * Benzinmenge / Kilometer;
	Kosten = Verbrauch * Preis;

	cout << "Kilometer				:	" << Kilometer << endl;
	cout << "Benzinmenge				:	" << Benzinmenge << endl;
	cout << "Preis					:	" << Preis << endl;
	cout << "Verbrauch				:	" << Verbrauch << endl;
	cout << "Kosten					:	" << Kosten << endl;
	return 0;
}