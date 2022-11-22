// Bibliotheken_Bereich
#include <iostream>
#include <concrt.h>
#include <thread>

// Bilbiotheken_Verkürzung
using namespace std;

// Variablen_Definitionsbereich
bool Programm_Beenden = false;

// Klassen_Bereich
class Steuer_Elemente {
    void sleep(int x) {
        float Sekunde = x * 1000;
        Concurrency::wait(Sekunde);
    }
};

// System_Funktionen
void sleep(int x) {
    float Sekunde = x * 1000;
    Concurrency::wait(Sekunde);
}

void Ueberschrift() {
    cout << "                   R E C H N E R\n                   ~~~~~~~~~~~~~\n\n";
}

// Funktions_Bereich
void Rechner() {
    bool Schalter = true, Anzeigen = false;
    double Zahl_Eins, Zahl_Zwei, Ergebnis;
    string Operator;

    cout << "Zahl 1: ";
    cin >> Zahl_Eins;
    cout << "Zahl 2: ";
    cin >> Zahl_Zwei;
    cout << "Welchen Operator moechten Sie verwenden?\n+ - / *\n\nOperator: ";
    cin >> Operator;
    if (Operator == "+")
        Ergebnis = Zahl_Eins + Zahl_Zwei;
    else if (Operator == "-")
        Ergebnis = Zahl_Eins - Zahl_Zwei;
    else if (Operator == "*")
        Ergebnis = Zahl_Eins * Zahl_Zwei;
    else if (Operator == "/")
        Ergebnis = Zahl_Eins / Zahl_Zwei;
    else
        cout << "Unbekannter Operator!";
    cout << "\nDas Ergebnis lautet: " << Ergebnis << "\n";
}

// Aufruf_Bereich
int main()
{
    Ueberschrift();
    Rechner();
    while (Programm_Beenden != true)
    {
        cout << "L";
    }
}