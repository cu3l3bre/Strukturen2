#include <iostream>
#include <string>

using namespace std;


// Struktur fuer Produkte eines Lebensmittelladens
struct Produkt
{
	string name;
	double preis;	// Preis in euro pro kg
	double gewicht;	// Gewicht in kg

};


int main()
{
	cout << "Programm zu Strukturen 2" << endl << endl;

	Produkt apfel;
	Produkt birne;

	apfel.name = "Apfel";
	apfel.preis = 1.20;
	apfel.gewicht = 0.3;
	
	birne.name = "Birne";
	birne.preis = 1.50;
	birne.gewicht = 0.3;





	system("pause");
	return 0;
}