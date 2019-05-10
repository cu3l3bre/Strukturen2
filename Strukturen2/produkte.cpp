
#include <iostream>
#include "produkte.h"


// Funktion zur Ausgabe in der Konsole
void AusgabeProduket(Produkt produkt)
{
	std::cout << "Produkt:\t" << produkt.name << std::endl;
	std::cout << "Preis pro kg:\t" << produkt.preis << " Euro" << std::endl;
	std::cout << "Gewicht:\t" << produkt.gewicht << " kg " << std::endl;
	std::cout << std::endl;
}


// Funktion zur Berechnung des Gesamtpreies eines Produktes
double berechneGesamtpreis(Produkt produkt)
{
	double Gesamtpreis = 0.0;
	Gesamtpreis = produkt.preis * produkt.gewicht;
	return Gesamtpreis;
}