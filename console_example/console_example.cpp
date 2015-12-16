#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// w starym Visual Studio Express main wygl¹da tak:
// int _tmain(int argc, _TCHAR* argv[])

int main()
{
	
	string name = "";

	cout << "Enter your name: ";
	cin >> name;
	cout << "Your name is " << name << endl;

    return 0;

}
