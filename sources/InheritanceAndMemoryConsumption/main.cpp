#include <iostream>
#include <vector>
#include "Node.h"
#include "Point.h"
#include "PointWithID.h"

int main ()
{
	std::cout << "sizeof(Point): " << sizeof(GEOLIB::Point) << std::endl;
	std::cout << "sizeof(PointWithID): " << sizeof(GEOLIB::PointWithID) << std::endl;
	std::cout << "sizeof(Node): " << sizeof(Node) << std::endl;
	std::cout << "sizeof(std::vector<Node*>): " << sizeof(std::vector<Node*>) << std::endl;
}
