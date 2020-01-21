/*
 Title:		UNION
 LastEdit: 	18.10.2010
 Author  :	Heinz Tschabitza /Puschmann
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	-  UNION
				-  Verwendung von Strukturen mit namenlosen UNION

---------------------------------------------------------------------------

Aufgabe:   	Überlegen Sie vor dem Übersetzen, den Ablauf und wecher Fehler
			im Quelltext ist.
			Achten Sie auf die Verwendung der namenlosen UNION
			Ändern Sie die Daten sinnvoll!
			Definieren Sie im Programm eine separate UNIONl.

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <cstdlib>         // EXIT_SUCCESS
using namespace std;

struct Flugzeug
{
	int Spannweite;
	int Tankinhalt;
	union
	{
		float Passagiere;     // fr Leuteflieger
		float Liter;     // fr Feuerflieger
		int Paletten;         // fr Transporter
	};
} Feuerflieger, Leuteflieger, Transporter;

int main()
{
	Leuteflieger.Spannweite = 40;
	Leuteflieger.Passagiere = 100;
	Leuteflieger.Tankinhalt = 12000.0;

	Feuerflieger.Spannweite = 90;
	Feuerflieger.Tankinhalt = 12000;
	Feuerflieger.Liter = 14000.0;

	Transporter.Spannweite = 106;
	Transporter.Tankinhalt = 4;
	Transporter.Paletten = 42;


	Leuteflieger.Paletten = 4;  //Überschreiben von Passagiere

	cout << "Der Transporter traegt " << Transporter.Paletten << " Paletten und " << Transporter.Passagiere << " Passagiere.\n";
	cout << "Der Transporter hat " << Transporter.Tankinhalt << " Liter im Tank\n";

	Transporter.Passagiere = 180;  //Überschreiben von Paletten!!

	cout << "Der Transporter traegt " << Transporter.Paletten << " Paletten nach ueberschrieben und dadruch" << Transporter.Passagiere << " Passagiere.\n";

	return EXIT_SUCCESS;
}
