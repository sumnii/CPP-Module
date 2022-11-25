#ifndef CPP_MODULE_FIXED_H
#define CPP_MODULE_FIXED_H

#include "iostream"

class Fixed {
private:
	int num;
	const static int bit = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator = (const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif //CPP_MODULE_FIXED_H
