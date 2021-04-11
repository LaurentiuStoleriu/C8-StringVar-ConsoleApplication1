#pragma once
#include <iostream>

using std::ostream; using std::istream;
using std::cout; using std::cin; using std::endl;

const int MAX_STRING_LENGTH = 100;

class StringVar
{
public:
	StringVar(int lungime);
	// Initializeaza obiectul care poate avea lungime maxima "lungime".
	// Seteaza valoarea obiectului cu sirul vid.
	StringVar();
	// Initializeaza obiectul care poate avea lungime maxima 255.
	// Seteaza valoarea obiectului cu sirul vid.
	StringVar(const char a[]);
	// Preconditie: Sirul a contine caractere terminate cu '\0'.
	// Initializeaza obiectul cu valoarea lui "a" si cu lungimea maxima egala cu strlen("a").
	StringVar(const StringVar &obiect_sir);
	// Constructorul de copiere
	~StringVar();
	// Returneaza memoria dinamica folosita de obiect in heap.
	int length() const;
	// Returneaza lungimea obiectului apelat.
	void citeste_linie(istream &intrare);
	// Actiune: se citesc caracterele pana la primul '\n' intalnit.
	// Daca obiectul apelat nu are suficient spatiu de memorie pentru toate caracterele, atunci se trunchiaza.
	friend ostream &operator <<(ostream &iesire, const StringVar &sir);
	// Supraincarca operatorul << pentru a afisa valori de tip StringVar.
	// Actiune: se citeste primul sir de caractere diferit de spatii.
private:
	char *valoare; // pointer catre sirul dinamic.
	int lungime_maxima;
};