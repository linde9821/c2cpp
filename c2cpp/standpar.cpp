/*
 Title:		Standardparameter
 LastEdit: 	24/03/1997
 Author  :	Tschabitzer
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Einsatz von Standardparametern


---------------------------------------------------------------------------

Aufgabe:   	Was passiert, wenn die Standardwerte nicht am Ende der Liste der
			formalen Parameter steht? Untersuchen Sie die Auswirkungen.


---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS

using namespace std;

int Volumen(int, int = 2, int Hoehe = 3);

int main()
{
	int x = 10, y = 12, z = 15;

	cout << "Einige Daten sind " << Volumen(x, y, z) << "\n";
	cout << "Einige Daten sind " << Volumen(x, y) << "\n";
	cout << "Einige Daten sind " << Volumen(x) << "\n";

	cout << "Einige Daten sind " << Volumen(x, 7) << "\n";
	cout << "Einige Daten sind " << Volumen(5, 5, 5) << "\n";

	return 0;
}

int Volumen(int Laenge, int Breite, int Hoehe)
{
	cout << Laenge << Breite << Hoehe;
	return Laenge * Breite * Hoehe;
}
