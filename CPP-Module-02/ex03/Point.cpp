#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(float xVal, float yVal) : x(xVal), y(yVal)
{
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
}

Point& Point::operator=(const Point& other)
{
	(void)other;
	return *this;
}

Point::~Point()
{
}

Fixed const& Point::getX() const
{
	return x;
}

Fixed const& Point::getY() const
{
	return y;
}
