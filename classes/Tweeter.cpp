#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;

Tweeter::Tweeter(string first, string last, int arbitrary, string handle) :
	Person(first, last, arbitrary), tweeterHandle(handle) {

	// nie mam dostêpu do prywatnych zmiennych Person: firstName, lastName
	cout << "constructing tweeter " << tweeterHandle << endl;
}

Tweeter::~Tweeter() {
	cout << "destructing tweeter " << tweeterHandle << endl;
}
