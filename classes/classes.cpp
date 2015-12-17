#include "stdafx.h"
// jeœli zostawimy Person.h, to bêdziemy mieli podwójn¹ definicjê klasy (równie¿ w Tweeter.h)
// chyba, ¿e do dodamy #ifndef, #define i #endif
#include "Person.h"
#include "Tweeter.h"
#include "status.h"

int main()
{

	Status s;
	s = PENDING;

	// tutaj bêdzie wywo³ywany konstruktor
	// obiekty s¹ przechowywane na stosie
	Person p1("Sebastian", "Gulczynski", 32);

	{
		// najpierw bêdzie wywo³anie konstruktora klasy Person, potem Tweeter
		Tweeter t1("Karolina", "Gulczynska", 31, "@morysonka");
	} // wywo³anie destruktora Tweeter, potem Person

	// obiekt istnieje w scope {}, w którym jest tworzony

	s = APPROVED;

    return 0;

} // wywo³anie destruktora p1

// dodanie stdafx.h musi byæ w pierwszej linii pliku

// domyœlnie w klasie wszystko jest prywatne
// dobra praktyka - nie stosowaæ publicznych zmiennych obiektu (member variables), jeœli nie jest to konieczne

// odwo³anie do zmiennych i funkcji statycznych za pomoc¹ ::, do pozosta³ych z .
// odwo³anie do konstruktora ::

// ctrl + tab - prze³¹czenie miêdzy tabami

// Resource Acquisition is Initialization (RAI) - pattern
// nie trzeba robiæ np. rêcznego otwarcia/zamkniêcia pliku (to mamy w konstruktorze)
// jeœli mamy zasób, który gdzieœ przypisujemy do u¿ycia
// np. otwarcie/zamkniêcie pliku, po³¹czenie do bazy danych,
// to musimy mieæ destruktor

// struct - plain old data, bez logiki biznesowej
// mog¹ zawieraæ funkcje, konstruktor, destruktor
// domyœlny dostêp jest publiczny
