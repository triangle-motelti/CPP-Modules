#include "Fixed.hpp"
#include <cmath>

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : value(n << fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : value(static_cast<int>(roundf(f * (1 << fractionalBits)))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	value = other.value;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		value = other.value;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return value;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt(void) const {
	return value >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, Fixed const& f) {
	os << f.toFloat();
	return os;
}

