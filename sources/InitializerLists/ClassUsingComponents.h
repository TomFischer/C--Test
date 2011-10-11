/*
 * ClassUsingComponents.h
 *
 *  Created on: 29.04.2011
 *      Author: TF
 */

#ifndef CLASS_USING_COMPONENTS_H_
#define CLASS_USING_COMPONENTS_H_

#include "ComponentClass.h"
#include "ClassUsingComponents.h"

class ClassUsingComponents
{
public:
	ClassUsingComponents();
	ClassUsingComponents (double value);
	/**
	 * constructor does not employ initializer list
	 */
	ClassUsingComponents(bool test);
	virtual ~ClassUsingComponents();
private:
	ComponentClass _comp0;

};

#endif /* CLASS_USING_COMPONENTS_H_ */
