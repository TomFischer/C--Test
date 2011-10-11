/*
 * ClassUsingComponents.cpp
 *
 *  Created on: 29.04.2011
 *      Author: TF
 */

#include <iostream>
#include "ClassUsingComponents.h"

ClassUsingComponents::ClassUsingComponents() :
	_comp0 (0.0)
{
	std::cout << "[ClassUsingComponents] default constructor" << std::endl;
}

ClassUsingComponents::ClassUsingComponents(double value) :
	_comp0 (value)
{
	std::cout << "[ClassUsingComponents] custom constructor" << std::endl;
}

ClassUsingComponents::ClassUsingComponents(bool test)
{
	if (test)
		std::cout << "[ClassUsingComponents] custom constructor - without initializer list" << std::endl;
	_comp0 = ComponentClass (10);
}

ClassUsingComponents::~ClassUsingComponents()
{
	std::cout << "[ClassUsingComponents] destructor" << std::endl;
}
