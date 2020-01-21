/*
 Title:		Überladen von Funktionen
 LastEdit: 	24/03/1997
 Author  :	Puschmann
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Ueberladen von Funktionen


---------------------------------------------------------------------------

Aufgabe:	Ergänzen Sie das Programm um die fehlenden Funktionsaufrufe.
			Beseitigen Sie Fehler.
			Untersuchen Sie, unter welchen Bedingungen der Compiler Funktionen
			unterscheiden kann.
			Erweitern Sie die Funktionen um Parameter mit Defaultwerten. Prüfen Sie
			die Effekte bei Überladenen Funktionen(Mehrdeutigkeit beim Aufruf,
			Defaultwerte nur im Prototyp, Defaultwerte immer rechts in der
			formalen Parameterliste)

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS

using namespace std;

void Funktion(int Zahl, float x = 0.0f);
int Funktion(int Zahl);
int Funktion(int Zahl = 0);
float Funktion(float Zahl);

int main()
{
	int Wert = 5;
	float f = 3.0;

	int Zaehler = 2;

	cout << "Der Wert ist " << Wert;

	Funktion(Zaehler);

	cout << "Der Wert ist " << Wert;

	return EXIT_SUCCESS;
}

void Funktion(int Zahl, float x)
{
	Zahl = Zahl + Zahl;

	cout << "Die Zahl ist" << Zahl;

}

int Funktion(int Zahl)
{
	Zahl = Zahl + 2 * Zahl;

	cout << "Die Zahl ist" << Zahl;

	return Zahl;
}

int Funktion(int Zahl = 0)
{
	Zahl = Zahl + 2 * Zahl;

	cout << "Die Zahl ist" << Zahl;

	return Zahl;
}


float Funktion(float Zahl)
{
	Zahl = Zahl / (Zahl + 1);

	cout << "Die Zahl ist" << Zahl;

	return Zahl;

}