/*
 * Base.h
 *
 *  Created on: 29.04.2011
 *      Author: TF
 */

#ifndef BASE_H_
#define BASE_H_

class Base
{
public:
	Base();
	Base(double value);
	virtual ~Base();
protected:
	double _protected_attribute;
};

#endif /* BASE_H_ */
