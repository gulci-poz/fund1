#include "stdafx.h"
#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;

Person::Person(string first, string last, int arbitrary) :
	firstName(first), lastName(last), arbitraryNumber(arbitrary) {

	// najpierw ma miejsce domy�lna inicjalizacja zmiennych
	// potem nast�puje inicjalizacja w konstruktorze

	// �eby unikn�� podw�jnej inicjalizacji
	// nie robimy �adnego przypisania w ciele konstruktora
	// tylko w nag��wku, za dwukropkiem

	//firstName = first;
	//lastName = last;
	//arbitraryNumber = arbitrary;

	cout << "constructing " << firstName << " " << lastName << endl;
}

Person::~Person() {
	cout << "destructing " << firstName << " " << lastName << endl;
}
