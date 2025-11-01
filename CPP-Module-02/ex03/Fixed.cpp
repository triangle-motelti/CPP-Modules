#include "Fixed.hpp"
#include <cmath>

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(int n) : value(n << fractionalBits)
{
}

Fixed::Fixed(float f) : value(static_cast<int>(roundf(f * (1 << fractionalBits))))
{
}

Fixed::Fixed(const Fixed& other)
{
	value = other.value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		value = other.value;
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
	return value;
}

void Fixed::setRawBits(int raw)
{
	value = raw;
}

float Fixed::toFloat() const
{
	return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt() const
{
	return value >> fractionalBits;
}

bool Fixed::operator>(Fixed const& other) const
{
	return value > other.value;
}

bool Fixed::operator<(Fixed const& other) const
{
	return value < other.value;
}

bool Fixed::operator>=(Fixed const& other) const
{
	return value >= other.value;
}

bool Fixed::operator<=(Fixed const& other) const
{
	return value <= other.value;
}

bool Fixed::operator==(Fixed const& other) const
{
	return value == other.value;
}

bool Fixed::operator!=(Fixed const& other) const
{
	return value != other.value;
}

Fixed Fixed::operator+(Fixed const& other) const
{
	Fixed result;
	result.value = value + other.value;
	return result;
}

Fixed Fixed::operator-(Fixed const& other) const
{
	Fixed result;
	result.value = value - other.value;
	return result;
}

Fixed Fixed::operator*(Fixed const& other) const
{
	Fixed result;
	long long temp = static_cast<long long>(value) * static_cast<long long>(other.value);
	temp = temp >> fractionalBits;
	result.value = static_cast<int>(temp);
	return result;
}

Fixed Fixed::operator/(Fixed const& other) const
{
	Fixed result;
	long long temp = (static_cast<long long>(value) << fractionalBits) / static_cast<long long>(other.value);
	result.value = static_cast<int>(temp);
	return result;
}

Fixed& Fixed::operator++()
{
	value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	++(*this);
	return old;
}

Fixed& Fixed::operator--()
{
	value -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	--(*this);
	return old;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.value < b.value)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.value < b.value)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.value > b.value)
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.value > b.value)
		return a;
	else
		return b;
}

std::ostream& operator<<(std::ostream& os, Fixed const& f)
{
	os << f.toFloat();
	return os;
}
