// libmonkey.cpp : Defines the entry point for the application.
//

#include "libmonkey.h"
#include "environment.hpp"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	cout << "HOME: " << Environment::home_path() << endl;
	cout << "XYZ: " << Environment::get("XYZ") << endl;
	Environment::set("HELLO", "WORLD");
	cout << "HELLO = " << Environment::get("HELLO") << endl;
	return 0;
}
