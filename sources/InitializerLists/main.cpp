#include <iostream>
#include "ClassUsingComponents.h"

void testInitializerList ()
{
	std::cout << "+++ creating object employing constructor without initializer list" << std::endl;
	std::cout << "\t ClassUsingComponents obj0 (true);" << std::endl;
	ClassUsingComponents obj0 (true);
	std::cout << std::endl;

	std::cout << "+++ creating object employing constructor with initializer list" << std::endl;
	std::cout << "\t ClassUsingComponents obj1;" << std::endl;
	ClassUsingComponents obj1;
	std::cout << std::endl;

	std::cout << "+++ leaving scope" << std::endl;
}

int main ()
{
	std::cout << "****** testing simple initializer list example" << std::endl;
	testInitializerList ();
}
