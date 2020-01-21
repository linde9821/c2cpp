/*
 Title:		Strukturen
 LastEdit: 	24/03/1997
 Author  :	Heinz Tschabitza
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	-  Verwendung von Strukturen

---------------------------------------------------------------------------

Aufgabe:   	�berlegen Sie vor dem �bersetzen, den Ablauf und wecher Fehler
			im Quelltext ist.
			Pr�fen Sie ob struct bei der Variablendeklaration ben�tigt wird.
			Achten Sie darauf, da� enum, struct, class usw. den gleichen
			Namensraum haben.

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen f�r die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS

using namespace std;

struct Tier
{
	int Gewicht;

	int Beine;
};

int main()
{
	Tier Hund1, Hund2, Henne;

	Tier Katze1;

	struct Tier Katze2;

	Katze2.Beine = 4;

	Hund1.Gewicht = 15;

	Hund2.Gewicht = 37;

	Henne.Gewicht = 3;


	Hund1.Beine = 4;

	Hund2.Beine = 4;

	Henne.Beine = 2;


	cout << "Das Gewicht von Hund1 ist " << Hund1.Gewicht << "\n";

	cout << "Das Gewicht von Hund2 ist " << Hund2.Gewicht << "\n";

	cout << "Das Gewicht von Henne ist " << Henne.Gewicht << "\n";

	cout << "Katze2 hat " << Katze2.Beine << " beine (Katze2 wurde mit struct deklariert)\n";

	return EXIT_SUCCESS;
}
