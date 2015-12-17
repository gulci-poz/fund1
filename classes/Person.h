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
// plik ma byæ uwzglêdniony tylko raz w jednostce kompilacji
// #pragma na pewno zadzia³a w VS
// #endif mo¿emy daæ za ca³ym segmentem kodu, wtedy nie zostanie on wykonany
