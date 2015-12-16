#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	// explicite litera� liczbowy long
	//long ilong = 50L;

	// przypisujemy longa do int, przy tak ma�ej warto�ci nie b�dzie ostrze�enia
	int i1 = 1L;
	int i2;
	i2 = 2;
	int i3(3);

	cout << "i1 = " << i1 << endl;
	cout << "i2 = " << i2 << endl;
	cout << "i3 = " << i3 << endl;

	double d1 = 2.2;
	double d2 = i1;
	// dzi�ki rzutowaniu explicite wyra�amy nasze intencje i pozbywamy si� warning�w
	int i4 = (int) d1;

	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;
	cout << "i4 = " << i4 << endl;

	char c1 = 'a';
	cout << "c1 is " << c1 << endl;

	// nie mo�emy przypisa� do znaku stringa (char*)
	//char c2 = "b";

	bool flag = false;
	cout << "flag is " << flag << endl;
	// przy tych castach pozostaj� performance warnings
	flag = (bool) i1;
	cout << "flag is " << flag << endl;
	flag = (bool) d1;
	cout << "flag is " << flag << endl;

	// unsigned char - 8 bit�w
	// char - 7 bit�w + znak
	unsigned char n1 = 128;
	// char pomie�ci dodatnie do 127, je�li przekroczymy ten zakres, to otrzymamy mo�liwe minimum (wrap), tutaj -128
	char n2 = 128;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	
	n1 = 254;
	// wrap 254 da nam -2; cofamy si� do -128 i dodajemy jeszcze 126
	n2 = 254;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;

	// wrap dla obu zmiennych, 44
	n1 = 300;
	n2 = 300;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;

    return 0;

}

// F9 - toggle breakpoint
// F5 - debug
// F10 - step over
// ctrl + F10 - run to cursor
// F11 - step into
// shift + F11 - step out
// F7 - build
// ctrl + alt + F7 - rebuild, wtedy pokazuje warningi
