/*
 Title:		Gültigkeit von Daten
 LastEdit: 	24/03/1997
 Author  :	Heinz Tschabitza
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	-  Aufzählungstypen

---------------------------------------------------------------------------

Aufgabe:   	Überlegen Sie vor dem Übersetzen, was ausgegeben wird.
			Prüfen Sie ob enum bei der Variablendeklaration benötigt wird.
			Achten Sie darauf, daß enum, struct, class usw. den gleichen
			Namensraum haben.

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS
using namespace std;

enum Spielausgang { SIEG, NIEDERLAGE, UNENTSCHIEDEN, AUFGABE };

int main()
{
	Spielausgang Ausgang;
	enum Spielausgang Verzicht = AUFGABE;// c.-Variante (also enum nicht benötigt)
	int Zaehler;

	for (Zaehler = SIEG; Zaehler <= AUFGABE; Zaehler++)
	{
		Ausgang = (Spielausgang)Zaehler;
		if (Ausgang == Verzicht)
		{
			cout << "Das Spiel wurde abgebrochen.\n";
		}
		else
		{
			cout << "Das Spiel wurde gespielt ";
			if (Ausgang == SIEG) 
			{
				cout << "und wir haben gewonnen!";
			}
			else if (Ausgang == NIEDERLAGE)
			{
				cout << "und wir haben verloren.";
			}
			else {
				cout << "und es war unentschieden.";
			}
				
			cout << "\n";
		}
	}
	return EXIT_SUCCESS;
}
