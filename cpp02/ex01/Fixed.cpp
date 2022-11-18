#include "Fixed.h"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	num = 0;
};

Fixed::Fixed(const int int_num) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(int_num);
}

Fixed::Fixed(const float float_num) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(float_num);
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->num = copy.getRawBits();
};

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = copy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
};

void Fixed::setRawBits(int const raw) {
	this->num = raw;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f) {
	out << f.getRawBits();
	return out;
}