/*
 Title:		Gültigkeit von Daten
 LastEdit: 	24/03/1997
 Author  :	Puschmann
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Gültigkeitsbereich von Daten

---------------------------------------------------------------------------

Aufgabe:   	Untersuchung des 'scope'-Operators :: . Erweitern Sie das Beispiel
			um einen Zyklus mit Variablendeklaration. Prüfen Sie die Gültigkeit
			der vereinbarten Variable in ihrem Compiler.

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS
using namespace std;

int index = 7;

int main()
{
	float index = 3.1415f;

	cout << "Der lokale Wert des index ist " << index << "\n";

	cout << "Der globale Wert des index ist " << ::index << "\n";

	::index = index + 3;  // was kommt raus ? warum ? Antwort: 6 weil localer wert von index genommen wird und in global gespeichert sowie int casting

	cout << "Der lokale Wert des index ist " << index << "\n";

	cout << "Der globale Wert des index ist " << ::index << "\n";

	return EXIT_SUCCESS;
}

