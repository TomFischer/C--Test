/*
 * Base.cpp
 *
 *  Created on: 29.04.2011
 *      Author: TF
 */

#include <iostream>

#include "Base.h"

Base::Base() :
	_protected_attribute (0.0)
{
	std::cout << "[Base] default constructor" << std::endl;
}

Base::Base(double value) :
	_protected_attribute (value)
{
	std::cout << "[Base] custom constructor" << std::endl;
}

Base::~Base()
{
	std::cout << "[Base] destructor" << std::endl;
}
