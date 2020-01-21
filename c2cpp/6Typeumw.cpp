/*
 Title:		Typumwandlung
 LastEdit: 	24/03/1997
 Author  :	Gordon Dodrill / Heinz Tschabitza
 System  : 	C++-Compiler
---------------------------------------------------------------------------

Schwerpunkte:  	- Typumwandlung
				- beachten Sie Effekte durch Rundung oder
				  Abschneiden der Nachkommastellen.

---------------------------------------------------------------------------

Aufgabe:   	Kennenlernen der Typumwandlung unter C++.
			Geben Sie die Ergebnisse aus.
			Untersuchen Sie beide Formen des casting unter C++.

---------------------------------------------------------------------------
*/
#include <iostream>       /* Prototypen für die Stream-Objekte */    
#include <stdlib.h>         // EXIT_SUCCESS

void ausgabe(int);
void ausgabe(float);
void ausgabe(char);

int main()
{
	int a = 42;
	float x = 17.1, y = 8.95, z = 0;
	char c = 0;

	c = (char)a + (char)x;
	ausgabe(c);
	c = (char)(a + (int)x);
	ausgabe(c);
	c = (char)(a + x);
	ausgabe(c);
	c = a + x;
	ausgabe(c);

	z = (float)((int)x * (int)y);
	ausgabe(z);
	z = (float)((int)(x * y));
	ausgabe(z);
	z = x * y;
	ausgabe(z);

	ausgabe('p');
	c = char(a) + char(x);
	ausgabe(c);
	c = char(a + int(x));
	ausgabe(c);
	c = char(a + x);
	ausgabe(c);
	c = a + x;
	ausgabe(c);

	z = float(int(x) * int(y));
	ausgabe(z);
	z = float(int(x * y));
	ausgabe(z);
	z = x * y;
	ausgabe(z);

	return EXIT_SUCCESS;
}

void ausgabe(int ausgabeInt)
{
	std::cout << ausgabeInt << std::endl;
}

void ausgabe(char ausgabeChar)
{
	std::cout << ausgabeChar << std::endl;
}

void ausgabe(float ausgabeFloat)
{
	std::cout << ausgabeFloat << std::endl;
}