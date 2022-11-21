/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:06:42 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/18 17:41:41 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	num = 0;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->num = copy.getRawBits();
};

Fixed &Fixed::operator = (const Fixed &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = copy.getRawBits();
	return *this;
};

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
};

void Fixed::setRawBits(int const raw) {
	this->num = raw;
};
