#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int fractionalBits;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	bool operator>(Fixed const& other) const;
	bool operator<(Fixed const& other) const;
	bool operator>=(Fixed const& other) const;
	bool operator<=(Fixed const& other) const;
	bool operator==(Fixed const& other) const;
	bool operator!=(Fixed const& other) const;

	Fixed operator+(Fixed const& other) const;
	Fixed operator-(Fixed const& other) const;
	Fixed operator*(Fixed const& other) const;
	Fixed operator/(Fixed const& other) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed const& min(Fixed const& a, Fixed const& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed const& max(Fixed const& a, Fixed const& b);
};

std::ostream& operator<<(std::ostream& os, Fixed const& f);

#endif
