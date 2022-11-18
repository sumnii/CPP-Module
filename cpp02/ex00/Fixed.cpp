#include "Fixed.h"

Fixed::Fixed() {
	num = 0;
	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) {
	this->num = copy.num;
	std::cout << "Copy constructor called" << std::endl;
};

Fixed &Fixed::operator = (const Fixed &copy) {
	this->num = copy.num;
	std::cout << "Copy assignment operator called" << std::endl;
}
