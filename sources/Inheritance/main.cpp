#include <iostream>
#include "Derived.h"

void testInheritance ()
{
	std::cout << "+++ creating object of class Derived employing default constructor" << std::endl;
	Derived der0;
	std::cout << "+++ creating object of class Derived employing custom constructor" << std::endl;
	Derived der1 (10.0);
	std::cout << "+++ leaving the test function" << std::endl;
}

int main ()
{
	std::cout << "****** testing simple inheritance example" << std::endl;
	testInheritance ();
}
