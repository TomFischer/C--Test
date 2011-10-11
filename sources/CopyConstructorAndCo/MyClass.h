#ifndef MYCLASS_H
#define MYCLASS_H

class SimpleClass {
public:
	/**
	 * default constructor
	 **/
	SimpleClass ();
	
	/**
	 * copy constructor
	 **/
	SimpleClass (SimpleClass const& source);

	/**
	 * assignment operator
	 */
	SimpleClass& operator= (SimpleClass const &rhs);

	/**
	 * destructor
	 */
	~SimpleClass ();

private:
	unsigned _my_private_variable;
};

#endif // MYCLASS_H
