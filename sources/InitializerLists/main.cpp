#include <iostream>
#include "ClassUsingComponents.h"

void testInitializerList ()
{
	std::cout << "+++ creating object employing custom constructor without initializer list" << std::endl;
	std::cout << "\t ClassUsingComponents obj0 (true);" << std::endl;
	ClassUsingComponents obj0 (true);
	std::cout << std::endl;

	std::cout << "+++ initializing object employing default constructor" << std::endl;
	std::cout << "\t ClassUsingComponents obj1;" << std::endl;
	ClassUsingComponents obj1;
	std::cout << std::endl;

	std::cout << "+++ creating object employing custom constructor" << std::endl;
	std::cout << "ClassUsingComponents obj2 (10.0);" << std::endl;
	ClassUsingComponents obj2 (10.0);
	std::cout << std::endl;

	std::cout << "+++ leaving scope" << std::endl;
}

int main ()
{
	std::cout << "****** testing simple initializer list example" << std::endl;
	testInitializerList ();
}
