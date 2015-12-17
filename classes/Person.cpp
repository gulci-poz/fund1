#include "stdafx.h"
#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;

Person::Person(string first, string last, int arbitrary) :
	firstName(first), lastName(last), arbitraryNumber(arbitrary) {

	// najpierw ma miejsce domyœlna inicjalizacja zmiennych
	// potem nastêpuje inicjalizacja w konstruktorze

	// ¿eby unikn¹æ podwójnej inicjalizacji
	// nie robimy ¿adnego przypisania w ciele konstruktora
	// tylko w nag³ówku, za dwukropkiem

	//firstName = first;
	//lastName = last;
	//arbitraryNumber = arbitrary;

	cout << "constructing " << firstName << " " << lastName << endl;
}

Person::~Person() {
	cout << "destructing " << firstName << " " << lastName << endl;
}
