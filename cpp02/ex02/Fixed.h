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

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	bool operator>(Fixed const &ref) const;
	bool operator<(Fixed const &ref) const;
	bool operator>=(Fixed const &ref) const;
	bool operator<=(Fixed const &ref) const;
	bool operator==(Fixed const &ref) const;
	bool operator!=(Fixed const &ref) const;

	Fixed operator+(const Fixed &ref);
	Fixed operator-(const Fixed &ref);
	Fixed operator*(const Fixed &ref);
	Fixed operator/(const Fixed &ref);

	static Fixed &min(Fixed &a, Fixed &b) {
		if (a>b) return b;
		return a;
	};

	const static Fixed &min(Fixed const &a, Fixed const &b) {
		if (a>b) return b;
		return a;
	};

	static Fixed &max(Fixed &a, Fixed &b) {
		if (a<b) return b;
		return a;
	};

	const static Fixed &max(Fixed const &a, Fixed const &b) {
		if (a<b) return b;
		return a;
	};
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif //CPP_MODULE_FIXED_H
