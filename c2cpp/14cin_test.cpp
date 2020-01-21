#include <iostream> // fuer Standardausgabe cout und Standardeingabe cin
#include <string> // fuer den Typ string (gehoert nicht zum Sprachkern!)
#include <iomanip> // fuer setw (set width, Breite einer Ausgabe)
using namespace std;

void main() {
	string muell; // Zum Einlesen "falscher Zeichen"
	int g1, g2; // Zum Einlesen zweier Ganzzahlen

	cout << "EinAus01: Jetzt geht es los!" << endl;

	// Solange von cin lesen, bis der Benutzer 2 korrekte Ganzzahlen
	// eingibt, bei Falscheingabe Fehlermeldung:
	while (true) { // Schleife wird mit break verlassen
		cout << "Zwei Ganzzahlen? ";
		cin >> g1 >> g2; // Versuch, zwei Ganzzahlen zu lesen.

		if (!cin.fail()) break; // Falls der Versuch nicht missglueckt ist

		// Falls der Versuch missglueckt ist (Formatfehler):
		cin.clear(); // Fehlerbit(s) in cin ausschalten
		cin.clear(); // Fehlerbit(s) in cin ausschalten
		getline(cin, muell); // Falsche Zeichen bis Zeilenende lesen
		int len = muell.size(); // Anzahl der falschen Zeichen nach len
		cout << setw(3) << len << " falsche Zeichen: " << muell << endl;

		//PRG3 C++ für Java-Programmierer SS01
	} // main
	/* ------------------------------------------------------------------------
	35 Ein Dialog mit dem Programm EinAus01:
	36
	37 EinAus01: Jetzt geht es los!
	38 Zwei Ganzzahlen? abc +456
	39 7 falsche Zeichen: abc 456
	40 Zwei Ganzzahlen? -123 abc
	41 3 falsche Zeichen: abc
	42 Zwei Ganzzahlen? -123 +456DM10Pfennige
	43 Ihre Eingabe: -123 und 456
	44 ------------------------------------------------------------------------ */
}