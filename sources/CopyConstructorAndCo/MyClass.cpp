#include <iostream>

#include "MyClass.h"

SimpleClass::SimpleClass () :
	_my_private_variable (0)
{
	std::cout << "\t[SimpleClass] default constructor" << std::endl;
}

SimpleClass::SimpleClass (SimpleClass const& source) :
	_my_private_variable (source._my_private_variable)
{
	std::cout << "\t[SimpleClass] copy constructor" << std::endl;
}

SimpleClass& SimpleClass::operator= (SimpleClass const& rhs)
{
	std::cout << "\t[SimpleClass] assignment operator" << std::endl;
	if (this == &rhs) return *this; // self assignment

	SimpleClass copy (rhs);
	std::swap (_my_private_variable, copy._my_private_variable);

	return *this;
}

SimpleClass::~SimpleClass ()
{
	std::cout << "\t[SimpleClass] destructor" << std::endl;
}
