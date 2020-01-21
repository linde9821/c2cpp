/*
 Title:		Referenzen
 LastEdit: 	24/03/1997
 Author  :	Puschmann
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Referenzvariablen bei Funktionsparametern


---------------------------------------------------------------------------

Aufgabe:   	Verändern Sie das Programm so, daß die Verdopplung sich in main
			auswirkt. Verwenden Sie Referenzparameter.

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS

using namespace std;

void Funktion(int& Zahl);

int main()
{
	int Wert = 5;

	cout << "Der Wert ist " << Wert;

	Funktion(Wert);

	cout << "Der Wert ist " << Wert;

	return EXIT_SUCCESS;
}

void Funktion(int& Zahl)
{
	Zahl = Zahl + Zahl;

	cout << "Die Zahl ist" << Zahl;
}