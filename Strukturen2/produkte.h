#pragma once


// Headerdatei - Schnittstellendatei - Interfacedatei
// Deklarationsteil / Benennung

#include <string>

// Struktur fuer Produkte eines Lebensmittelladens
struct Produkt
{
	std::string name;
	double preis;	// Preis in euro pro kg
	double gewicht;	// Gewicht in kg
};


// Funktion deklarieren
// Funktion zur Ausgabe in der Konsole
void AusgabeProduket(Produkt);

// Funktion deklarieren
// Funktion zur Berechnung des Gesamtpreies eines Produktes
double berechneGesamtpreis(Produkt);
