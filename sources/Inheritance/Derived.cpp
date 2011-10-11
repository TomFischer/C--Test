/*
 * Derived.cpp
 *
 *  Created on: 29.04.2011
 *      Author: TF
 */

#include <iostream>

#include "Derived.h"

Derived::Derived() :
	Base ()
{
	std::cout << "[Derived] default constructor" << std::endl;
}

Derived::Derived(double value) :
	Base (value)
{
	std::cout << "[Derived] custom constructor" << std::endl;
}


Derived::~Derived()
{
	std::cout << "[Derived] destructor" << std::endl;
}
