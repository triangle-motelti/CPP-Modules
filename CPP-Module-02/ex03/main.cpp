#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

int printResult(bool inside)
{
	if (inside)
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside or on edge" << std::endl;
	return 0;
}

int main()
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(0.0f, 10.0f);

	Point p1(2.0f, 2.0f);
	Point p2(0.0f, 0.0f);
	Point p3(5.0f, 0.0f);
	Point p4(10.0f, 10.0f);

	std::cout << "Triangle vertices: (0,0) (10,0) (0,10)" << std::endl;

	std::cout << "Point (2,2): ";
	printResult(bsp(a, b, c, p1));

	std::cout << "Point (0,0) vertex: ";
	printResult(bsp(a, b, c, p2));

	std::cout << "Point (5,0) on edge: ";
	printResult(bsp(a, b, c, p3));

	std::cout << "Point (10,10) outside: ";
	printResult(bsp(a, b, c, p4));

	return 0;
}
