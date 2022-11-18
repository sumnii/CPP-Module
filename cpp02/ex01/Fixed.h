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
	Fixed &operator = (const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif //CPP_MODULE_FIXED_H
