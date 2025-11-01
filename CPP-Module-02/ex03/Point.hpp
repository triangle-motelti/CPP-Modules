#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(float xVal, float yVal);
	Point(const Point& other);
	Point& operator=(const Point& other);
	~Point();

	Fixed const& getX() const;
	Fixed const& getY() const;
};

#endif
