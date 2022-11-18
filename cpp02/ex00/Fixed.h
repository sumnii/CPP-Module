#ifndef CPP_MODULE_FIXED_H
#define CPP_MODULE_FIXED_H


class Fixed {
private:
	int fixed_point_num;
	const int bit;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator = (const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif //CPP_MODULE_FIXED_H
