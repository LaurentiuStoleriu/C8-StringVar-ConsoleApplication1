#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "StringVar.h"

using std::ostream; using std::istream;
using std::cout; using std::cin; using std::endl;

StringVar::StringVar(int lungime)
{
	lungime_maxima = lungime;
	valoare = new char[lungime_maxima + 1]; // + 1 este pentru '\0'
	if (valoare == NULL)
	{
		cout << "Eroare: Memorie insuficienta." <<endl;
		exit(1);
	}
	valoare[0] = '\0';
}

StringVar::StringVar()
{
	lungime_maxima = 255;
	valoare = new char[lungime_maxima + 1]; // + 1 este pentru '\0'
	if (valoare == NULL)
	{
		cout << "Eroare: Memorie insuficienta." << endl;
		exit(1);
	}
	valoare[0] = '\0';
}

StringVar::StringVar(const char a[])
{
	lungime_maxima = strlen(a);
	valoare = new char[lungime_maxima + 1]; // + 1 este pentru '\0'
	if (valoare == NULL)
	{
		cout << "Eroare: Memorie insuficienta." << endl;
		exit(1);
	}
	strcpy(valoare, a);
}

StringVar::StringVar(const StringVar &obiect_sir)
{
	lungime_maxima = obiect_sir.length();
	valoare = new char[lungime_maxima + 1]; // + 1 este pentru '\0'
	if (valoare == NULL)
	{
		cout << "Eroare: Memorie insuficienta." << endl;
		exit(1);
	}
	strcpy(valoare, obiect_sir.valoare);
}
StringVar :: ~StringVar()
{
	delete[] valoare;
}

int StringVar::length() const
{
	return strlen(valoare);
}

void StringVar::citeste_linie(istream &intrare)
{
	intrare.getline(valoare, lungime_maxima + 1);
}

ostream &operator <<(ostream &iesire, const StringVar &sir)
{
	iesire << sir.valoare;
	return iesire;
}