#ifndef CPP_MODULE_FIXED_H
#define CPP_MODULE_FIXED_H

#include "iostream"
#include "math.h"

class Fixed {
private:
	int num;
	const static int bit = 8;

public:
	Fixed();
	Fixed(const int int_num);
	Fixed(const float float_num);
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &copy);

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;

	bool operator>(const Fixed &ref) const;
	bool operator<(const Fixed &ref) const;
	bool operator>=(const Fixed &ref) const;
	bool operator<=(const Fixed &ref) const;
	bool operator==(const Fixed &ref) const;
	bool operator!=(const Fixed &ref) const;

	Fixed &operator++();
	const Fixed operator++(int);
	Fixed &operator--();
	const Fixed operator--(int);

	Fixed operator+(const Fixed &ref);
	Fixed operator-(const Fixed &ref);
	Fixed operator*(const Fixed &ref);
	Fixed operator/(const Fixed &ref);

	static Fixed &min(Fixed &a, Fixed &b);
	const static Fixed &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	const static Fixed &max(Fixed const &a, Fixed const &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif //CPP_MODULE_FIXED_H
