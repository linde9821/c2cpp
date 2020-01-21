/*
 Title:		cin cout mit Dateien
 LastEdit: 	24/03/1997
 Author  :	Gordon Dodrill / Heinz Tschabitza
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Dateiarbeit mit cin cout

---------------------------------------------------------------------------

Aufgabe:   Funktion der Dateiarbeit mit cin und cout.
			Überlegen sie sich vor der Programmabarbeitung, den Ablauf.


---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <cstdlib>         // EXIT_SUCCESS
#include <fstream>

#include <stdio.h> // oder <cstdio>

using namespace std;

int main()
{
	ifstream EingDatei;
	ofstream AusgDatei;
	ofstream Drucker;
	char Dateiname[20];

	cout << "Geben Sie dei zu kopierende Datei ein ----> ";

	cin >> Dateiname;

	EingDatei.open(Dateiname, ios_base::in);
	if (!EingDatei)
	{
		cout << "Die Eingabedatei kann nicht ge”ffnet werden.\n";
		exit(1);
	}

	AusgDatei.open("Kopie");
	if (!AusgDatei)
	{
		cout << "Die Ausgabedatei kann nicht ge”ffnet werden.\n";
		exit(1);
	}

	/*Drucker.open("PRN");
	if (!Drucker)
	{
	   cout << "Es gibt ein Problem mit dem Drucker.\n";
	   exit(1);
	}*/

	cout << "Alle drei Dateien wurden ge”ffnet.\n";

	char EinBuchstabe;

	Drucker << "Das ist der Anfang der gedruckten Kopie.\n\n";

	while (EingDatei.get(EinBuchstabe))
	{
		AusgDatei.put(EinBuchstabe);
		Drucker.put(EinBuchstabe);
	}

	Drucker << "\n\nDas ist das Ende der gedruckten Kopie.\n";

	EingDatei.close();
	AusgDatei.close();
	Drucker.close();

	return EXIT_SUCCESS;
}
