/*
 Title:		Prototypen
 LastEdit: 	24/03/1997
 Author  :	Puschmann
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Prototypen
				- Parameterliste bei Prototypen

---------------------------------------------------------------------------

Aufgabe:   	Ver�ndern Sie einzelne Parameter in der Funktionsdefinition und im
			Prototyp.
			Lassen Sie in der Prototypdeklaration den Variablennamen weg.

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen f�r die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS

using namespace std;

void ausgabe(int Zahl);

int main()
{
	int a = 1;

	ausgabe(a);

	return EXIT_SUCCESS;
}



void ausgabe(int Zahl)
{
	cout << "\n Die Zahl ist: " << Zahl;
}