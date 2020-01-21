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

			??? wtf xD

---------------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void main()
{
	//cout
	/*int a = 65;
	cout << a << "  "
		<< oct << a << "  "
		<< hex << a << "  "
		<< (char)a  << endl;*/
		//Strings
	string s, t;
	cout << "size :" << s.size() << "  cpacity" << s.capacity() << endl;
	s = "Hallo";
	cout << "size :" << s.size() << "  cpacity" << s.capacity() << endl;
	cout << s[0] << endl;
	s.reserve(100);
	cout << "size :" << s.size() << "  cpacity" << s.capacity() << endl;
	s.resize(50);
	cout << "size :" << s.size() << "  cpacity" << s.capacity() << endl;
	cout << s << endl;
	t = " C++";
	cout << s << t << endl;
	s += t; // => s = s + t
	cout << s << endl;
}