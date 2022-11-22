#include "HF.h"

void Aufgabe_1() {
	int k;
	double x = 7.7, y = 8.6, z;
	int ch1 = 15, ch2 = 6;
	char field[10];
	int* ptr1;
	int* ptr2;
	int i;

	k = x + y;
	z = (int)x + int(y);
	k = (int)(x + y);
	i = sizeof(field);
	i = sizeof(field[2]);
	ch1 = ch1 >> 2;
	ch2 <<= 3;
	ch2 &= ch1;
	//i = ptr2 - ptr1;
	//ptr2--;

	cout << i << endl;
}

int Aufgabe_2(int k, int& i, int j, int* pk, double* ptr) {
	k += 2;
	i--;
	j = ++j - 2;
	*pk *= 3;
	*(++ptr + 1) += 4.0;
	*(ptr + 3) -= 2.0;
	return (j + 4);
}

int Aufgabe_3(int* ptr, int Anzahl, double &Mittelwert);

int Aufgabe_4(char*);

class punkt {
	double x, y, z;
	string OPE;
public:
	punkt() {
		x = 0;
		y = 0;
		z = 0;
		OPE = "+";
	}

	punkt(double a, double b, double c, string Operator) {
		x = a;
		y = b;
		z = c;
		OPE = Operator;
	}

	~punkt() {
		//
	}
	double add();
	double op();
};

double punkt::add() {
	return x + y + z;
}

double punkt::op() {
	if (OPE == "+" or OPE == "plus" or OPE == "Plus") {
		return punkt::add();
	}
}

int main() {
	// Aufgabe 1
/*
	Aufgabe_1();
*/
	// Aufgabe 2
/*
	int a = 13, b = 6, c = 15, d = 16, e = 8;
	double field[5] = { 12.0, 13.0, 14.0, 15.0, 16.0 };
	a = Aufgabe_2(b, c, &e, field);
*/
	// Aufgabe 3
/*
	int Array[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << sizeof(Array)/sizeof(Array);
	int Anzahl = (sizeof(Array) / sizeof(Array));
	double Mittelwert = 0.0;
	Aufgabe_3(Array, Anzahl, Mittelwert);
	return 0;
*/
	// Aufgabe 4
/*
	char File[20] = "Messwerte.dat";
	Aufgabe_4(File);
*/
	// Aufgabe 5
/*
	punkt P1;
	punkt P2 {2.0, 5.0, 6.0, "+"};
	cout << P1.op() << endl;
	cout << P2.op() << endl;
	P1.~punkt();
	P2.~punkt();
*/
}

int Aufgabe_3(int* ptr, int Anzahl, double &Mittelwert) {
	int i = 0;
	while (i != Anzahl) {
		cout << *ptr + i << endl;
		i++;
	}

	return 0;
/*
	for (int i = 0; i <= Anzahl; i++) {
		if (i == Mittelwert) {
			return 1;
			break;
		} else {
			return 0;
		}
	} */
}

int Aufgabe_4(char* FileName) {
	FILE* Datei;
	int x, y, z, Anzahl;

	fopen_s(&Datei, FileName, "r");
	int err = (char)malloc(sizeof(char));
	if (err == NULL) {
		return 0;
	} else {
		fscanf_s(Datei, "%d %d %d %d", &x, &y, &z, &Anzahl);
		
	}
	cout << Anzahl << endl;
	fclose(Datei);
	free(Datei);
	return 0;
}