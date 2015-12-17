#include "stdafx.h"
// je�li zostawimy Person.h, to b�dziemy mieli podw�jn� definicj� klasy (r�wnie� w Tweeter.h)
// chyba, �e do dodamy #ifndef, #define i #endif
#include "Person.h"
#include "Tweeter.h"
#include "status.h"

int main()
{

	Status s;
	s = PENDING;

	// tutaj b�dzie wywo�ywany konstruktor
	// obiekty s� przechowywane na stosie
	Person p1("Sebastian", "Gulczynski", 32);

	{
		// najpierw b�dzie wywo�anie konstruktora klasy Person, potem Tweeter
		Tweeter t1("Karolina", "Gulczynska", 31, "@morysonka");
	} // wywo�anie destruktora Tweeter, potem Person

	// obiekt istnieje w scope {}, w kt�rym jest tworzony

	s = APPROVED;

    return 0;

} // wywo�anie destruktora p1

// dodanie stdafx.h musi by� w pierwszej linii pliku

// domy�lnie w klasie wszystko jest prywatne
// dobra praktyka - nie stosowa� publicznych zmiennych obiektu (member variables), je�li nie jest to konieczne

// odwo�anie do zmiennych i funkcji statycznych za pomoc� ::, do pozosta�ych z .
// odwo�anie do konstruktora ::

// ctrl + tab - prze��czenie mi�dzy tabami

// Resource Acquisition is Initialization (RAI) - pattern
// nie trzeba robi� np. r�cznego otwarcia/zamkni�cia pliku (to mamy w konstruktorze)
// je�li mamy zas�b, kt�ry gdzie� przypisujemy do u�ycia
// np. otwarcie/zamkni�cie pliku, po��czenie do bazy danych,
// to musimy mie� destruktor

// struct - plain old data, bez logiki biznesowej
// mog� zawiera� funkcje, konstruktor, destruktor
// domy�lny dost�p jest publiczny
