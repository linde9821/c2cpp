/*
 Title:		Gültigkeit von Daten
 LastEdit: 	24/03/1997
 Author  :	Puschmann
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	-  Ein- und Ausgabe von Daten mit cin cout.

---------------------------------------------------------------------------

Aufgabe:   	Geben Sie den ASCII-Zeichensatz als Tabelle aus.
			Die Ausgabe soll die Ziffer dezimal, oktal und hexadezimal, sowie
			das Zeichen enthalten. Auf einer Zeile sollen drei Zeichen ausgegeben werden.
			Am Schluß soll in einem Zyklus zu einem eingegebenen Zahlenwert das Zeichen
			ausgegeben werden, solange der eingegebene Zahlenwert einem druckbaren
			Zeichen entspricht.

---------------------------------------------------------------------------
*/

#include <iostream>

using namespace std;

bool isNumber(int);

void inputToAsciiCharLoop();

void printAsciiTable();

int getNumberFromAsciiCode(int);

int main()
{
	printAsciiTable();

	inputToAsciiCharLoop();

	return EXIT_SUCCESS;
}

bool isNumber(int integerToTest)
{
	const int beginAsciiIndex = 48;
	const int endAsciiIndex = 57;

	if (integerToTest >= beginAsciiIndex && integerToTest <= endAsciiIndex)
	{
		return true;
	}

	return false;
}

void inputToAsciiCharLoop()
{
	int charNumberToPrint;

	do {
		cout << "Zeichennummer eingeben (-1 to exit): ";

		cin >> charNumberToPrint;


		if (charNumberToPrint >= 0 && charNumberToPrint < 128)
		{
			cout << (char)charNumberToPrint;
		}
		else if (charNumberToPrint != -1)
		{
			cout << "Kein darstellbares Zeichen";
		}
	} while (charNumberToPrint != -1);
}

void printAsciiTable() 
{
	for (int i = 0; i < 128; i++)
	{
		if (isNumber(i))
		{
			int number = getNumberFromAsciiCode(i);
			cout << dec << number << " ";
			cout << oct << number << " ";
			cout << hex << number << " "; 
		}
		else {
			cout << (char)i << " ";
		}

		if (i % 3 == 0)
		{
			cout << endl;
		}
	}
}

int getNumberFromAsciiCode(int code)
{
	switch (code) {
	case 48:
		return 0;
		break;
	case 49:
		return 1;
		break;
	case 50:
		return 2;
		break;
	case 51:
		return 3;
		break;
	case 52:
		return 4;
		break;
	case 53:
		return 5;
		break;
	case 54:
		return 6;
		break;
	case 55:
		return 7;
		break;
	case 56:
		return 8;
		break;
	case 57:
		return 9;
		break;

	}
}