/*
 Title:		Kommentare in C++
 LastEdit: 	13/01/2020
 Author  :	Puschmann, Lindner
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Kommentare in C++
				-

---------------------------------------------------------------------------

Aufgabe:   	Kommentare k�nnen neben den in C auch durch zwei Slash
			eingeleitet werden. Sie gelten bis zum Zeilenende.
			Ver�ndern Sie einzelne Kommentare in die Doppelslash-Form.
			�berlegen Sie wann welcher sinnvoll anzuwenden ist.
			Testen Sie was auf ihrem Compiler bei der gemischten Verwendung
			in einem Kommentar passiert.

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen f�r die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS

using namespace std;

// Funktionsprototypen

void ausgabe(const int Wert);  /* Prototyp f�r die Ausgabefunktion */

// Hauptprogramm

int main()
{
	const int BEGINN = 1;  // Wert nicht ver�nderbar -> Initialisierung notwendig
	const int ENDE = 5;    //  ebenfalls nicht ver�nderbar
	volatile int wert = 2;    /* Wert kann nur von au�erhalb ver�ndert werden.
							 z.B, vom Betriebssystem oder durch Interrupt
							 was das Laufzeitsystem nicht mitbekommt. Dadurch
							 werden f�r diese Variablen keine Optimierungen
							 durchgef�hrt. */

	int count;                  /*  Variable in C */

	for (count = BEGINN; count < ENDE; count++)
		ausgabe(count);

	return EXIT_SUCCESS;
}     /* Ende main() */

 // Funktionsdefinitionen


void ausgabe(const int Zahl)
{
	cout << "Zahlenwert  " << Zahl << "\n";
}

