/*
 * Derived.h
 *
 *  Created on: 29.04.2011
 *      Author: TF
 */

#ifndef DERIVED_H_
#define DERIVED_H_

#include "Base.h"

class Derived : public Base
{
public:
	Derived();
	Derived(double value);
	virtual ~Derived();
};

#endif /* DERIVED_H_ */
