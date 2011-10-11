#include <iostream>
#include "MyClass.h"

void testSimpleClass ()
{
	std::cout << "*** initializing object employing default constructor" << std::endl;
	std::cout << "SimpleClass obj0;" << std::endl;
	SimpleClass obj0;

	std::cout << "*** initializing object employing copy constructor" << std::endl;
	std::cout << "SimpleClass obj1 (obj0);" << std::endl;
	SimpleClass obj1 (obj0);

	std::cout << "*** initializing object employing assignment operator" << std::endl;
	std::cout << "SimpleClass obj2 = obj0;" << std::endl;
	SimpleClass obj2 = obj0;

	std::cout << "*** assignment operator" << std::endl;
	std::cout << "obj0 = obj1;" << std::endl;
	obj0 = obj1;
	std::cout << "leaving scope" << std::endl;
}

int main ()
{
	std::cout << "****** testing SimpleClass: " << std::endl;
	testSimpleClass ();
}
