/*
 * Node.h
 *
 *  Created on: Jan 25, 2011
 *      Author: TF
 */

#ifndef NODE_H_
#define NODE_H_

#include <vector>

class Node
{
public:
	Node (double x0, double x1, double x2, size_t id) :
		_id (id)
	{
		_coords[0] = x0;
		_coords[1] = x1;
		_coords[2] = x2;
	}

protected:
	double _coords[3];
	size_t _id;
	std::vector<Node*> _neighbors;
};

#endif 
