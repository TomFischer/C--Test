/*
 * ComponentClass.cpp
 *
 *  Created on: 29.04.2011
 *      Author: TF
 */

#include <iostream>

#include "ComponentClass.h"

ComponentClass::ComponentClass() :
	_protected_attribute (0.0)
{
	std::cout << "[ComponentClass] default constructor" << std::endl;
}

ComponentClass::ComponentClass(double value) :
	_protected_attribute (value)
{
	std::cout << "[ComponentClass] custom constructor" << std::endl;
}

ComponentClass::~ComponentClass()
{
	std::cout << "[ComponentClass] destructor" << std::endl;
}
