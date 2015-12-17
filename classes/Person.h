#pragma once

#include <string>

// include guard - pattern
#ifndef _Person_H
#define _Person_H

using std::string;

class Person {
private: 
	string firstName;
	string lastName;
	int arbitraryNumber;

public:
	Person(string first, string last, int arbitrary);
	~Person();
};

#endif

// w plikach .h mamy dodatkowo #pragma once,
// plik ma by� uwzgl�dniony tylko raz w jednostce kompilacji
// #pragma na pewno zadzia�a w VS
// #endif mo�emy da� za ca�ym segmentem kodu, wtedy nie zostanie on wykonany
