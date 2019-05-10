#include <iostream>
#include <string>
#include "produkte.h"

using namespace std;


int main()
{
	cout << "Programm zu Strukturen 2" << endl << endl;

	double gesamtpreis = 0.0;

	// Anlegen der Variablen vom Datentyp "Produkt" anlegen
	Produkt apfel;
	Produkt birne;

	apfel.name = "Apfel";
	apfel.preis = 1.20;
	apfel.gewicht = 1.0;
	
	birne.name = "Birne";
	birne.preis = 1.50;
	birne.gewicht = 2.0;


	AusgabeProduket(apfel);
	gesamtpreis = berechneGesamtpreis(apfel);
	cout << "Gesamtpreis:\t" << gesamtpreis << " Euro" << endl;
	cout << endl;

	AusgabeProduket(birne);
	gesamtpreis = berechneGesamtpreis(birne);
	cout << "Gesamtpreis:\t" << gesamtpreis << " Euro" << endl;
	cout << endl;

	system("pause");
	return 0;
}