/*
 Title:		Variable Parameteranzahl
 LastEdit: 	24/03/1997
 Author  :	Tschabitzer
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Funktionen mit variabler Parameteranzahl

---------------------------------------------------------------------------

Aufgabe:   	Üblegen Sie den Ablauf, was ist in Zahl enthalten ?
			Führen Sie das Programm aus.
			Variieren Sie die Aufrufe (auch ohne Parameter oder Zahl = 0).

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS
#include <stdarg.h>			// Makros für Parameterlisten

using namespace std;

// Deklaration einer Funktion mit einem verlangten Parameter
void ZeigeParameter(int number, ...);

int main()
{
	int Index = 5;

	int Eins = 1, Zwei = 2;


	ZeigeParameter(Eins, Index);

	ZeigeParameter(3, Index, Index + Zwei, Index + Eins);

	ZeigeParameter(Zwei, 7, 3);

	ZeigeParameter(2, 2);


	return EXIT_SUCCESS;
}


void ZeigeParameter(int Zahl, ...)
{
	va_list ParameterZg;						// 

	va_start(ParameterZg, Zahl);              // Aufruf an Initialisierungmakro

	cout << "Die Parameter sind ";

	for (int Index = 0; Index < Zahl; Index++)
	{
		cout << va_arg(ParameterZg, int) << " "; // Extrahiere einen Parameter
	}

	cout << "\n";

	va_end(ParameterZg);                        // Schliessmakro
}
