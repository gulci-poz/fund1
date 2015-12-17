#pragma once

#include "Person.h"
#include <string>

// w pliku .h unikamy kolizji nie u¿ywaj¹c using namespace std
using std::string;

class Tweeter : public Person {
private:
	string tweeterHandle;

public:
	// bez void
	Tweeter(string first, string last, int arbitrary, string handle);
	~Tweeter();
};
