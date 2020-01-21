/*
 Title:		G�ltigkeit von Daten
 LastEdit: 	24/03/1997
 Author  :	Heinz Tschabitza
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	-  Deklaratuion und Initialisierung von Variablen.

---------------------------------------------------------------------------

Aufgabe:   	�berlegen Sie vor dem �bersetzen, was ausgegeben wird. 
			Achten Sie auf die Initialisierungswerte und die Orte der Deklaration. 
			Pr�fen Sie den G�ltigkeitsbereich von Zaehler im for-Zyklus.
			Modifizieren Sie einzelne Anweisungen, zum Verst�ndnis der Abl�ufe. 
			
---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen f�r die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS

using namespace std;

int index;

int main()
{
int Etwas;
int &EtwasAnderes = Etwas; // Ein Synonym f�r Etwas

   Etwas = index + 14;      //index wurde mit 0 initialisiert
   cout << "Etwas hat den Wert " << Etwas << "\n";
   Etwas = 17;
   cout << "EtwasAnderes hat den Wert " << EtwasAnderes << "\n";

int WiederAnderes = 13;        //wird nicht automatisch initialisiert

   cout << "WiederAnderes " << WiederAnderes << "\n";
   
   for (int Zaehler = 3 ; Zaehler < 8 ; Zaehler++) 
   {
      cout << "Zaehler hat den Wert " << Zaehler << "\n";
      char Zaehler2 = Zaehler + 65;
      cout << "Zaehler2 hat den Wert " << Zaehler2 << "\n";
   }
   
static unsigned Goofy;      //wird automatisch mit 0 initialisiert

   cout << "Goofy hat den Wert " << Goofy << "\n";
 
   return EXIT_SUCCESS;
}               
