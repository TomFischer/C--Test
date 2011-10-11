/*
 * Base.h
 *
 *  Created on: 29.04.2011
 *      Author: TF
 */

#ifndef COMPONENT_CLASS_H_
#define COMPONENT_CLASS_H_

class ComponentClass
{
public:
	ComponentClass();
	ComponentClass(double value);
	virtual ~ComponentClass();
protected:
	double _protected_attribute;
};

#endif /* COMPONENT_CLASS_H_ */
