#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int fractionalBits;
public:
	Fixed();
	Fixed(int n);
	Fixed(float f);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int raw);

	float toFloat() const;
	int toInt() const;

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
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, Fixed const& f);

#endif
