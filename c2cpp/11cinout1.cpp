/*
 Title:		Gültigkeit von Daten
 LastEdit: 	24/03/1997
 Author  :	Gordon Dodrill / Heinz Tschabitza
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Ein und Ausgaben mit cin cout

---------------------------------------------------------------------------

Aufgabe:   Funktion der ein und Ausgaben mit cin und cout.
			Überlegen sie sich vor der Programmabarbeitung, was ausgegeben wird.
			Beachten Sie die letzte Ausgabe, warum ist sie im Hex-Format?,,,,,,,,,,,,,,

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS
#include <string.h>         // strcopy()

using namespace std;

int main()
{
	int index;

	float Entfernung;

	char Buchstabe;

	char Name[25];

	index = -23;

	Entfernung = 12.345;

	Buchstabe = 'L';

	strcpy(Name, "Studi Studius");

	cout << "Der Wert von index ist " << index << "\n";

	cout << "Der Wert von Enfernung ist " << Entfernung << "\n";

	cout << "Der Wert von Buchstabe ist " << Buchstabe << "\n";

	cout << "Der Wert von Name ist " << Name << "\n";

	index = 31;

	cout << "Der dezimale Wert von index ist " << dec << index << "\n";

	cout << "Der oktale Wert von index ist " << oct << index << "\n";

	cout << "Der hexadezimale Wert von index ist " << hex << index << "\n";

	cout << "Der Buchstabe Buchstabe ist " << (char)(index + 35) << "\n";

	cout << "Der Wert von Buchstabe ist " << (int)Buchstabe << "\n";


	cout << "Geben Sie eine Dezimalzahl ein --> ";

	cin >> index;

	cout << "Der hexadezimale Wert der Eingabe ist " << index << "\n";

	return EXIT_SUCCESS;

}
