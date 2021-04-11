// C8-StringVar-ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StringVar.h"

using std::ostream; using std::istream;
using std::cout; using std::cin; using std::endl;

void conversatie(int lung_max);

int main()
{
	conversatie(30);
	cout << "Sfarsitul demonstratiei." << endl;
	return 0;
}

void conversatie(int lung_max)
{
	StringVar nume1(lung_max), nume2("Rose");
	cout << "Care este numele dvs. ?" << endl;
	nume1.citeste_linie(cin);
	cout << "Numele trandafirului este " << nume2 << endl;
	cout << "Numele dvs. este " << nume1 << endl;
}
