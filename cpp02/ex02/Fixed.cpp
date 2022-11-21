/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:45:18 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:58:31 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	num = 0;
}

Fixed::Fixed(const int int_num) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(int_num << this->bit);
}

Fixed::Fixed(const float float_num) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(float_num * (1 << this->bit)));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = copy.num;
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
}

void Fixed::setRawBits(int const raw) {
	this->num = raw;
}

float Fixed::toFloat() const {
	return ((float)this->num / (1 << this->bit));
}

int Fixed::toInt() const {
	return (this->num >> this->bit);
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) {
	out << f.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &ref) const {
	return (this->num > ref.num);
}

bool Fixed::operator<(const Fixed &ref) const {
	return (this->num < ref.num);
}

bool Fixed::operator>=(const Fixed &ref) const {
	return (this->num >= ref.num);
}

bool Fixed::operator<=(const Fixed &ref) const {
	return (this->num <= ref.num);
}

bool Fixed::operator==(const Fixed &ref) const {
	return (this->num == ref.num);
}

bool Fixed::operator!=(const Fixed &ref) const {
	return (this->num != ref.num);
}

Fixed &Fixed::operator++() {
	this->num += 1;
	return (*this);
}

const Fixed Fixed::operator++(int) {
	const Fixed tmp(*this);
	this->num += 1;
	return (tmp);
}

Fixed &Fixed::operator--() {
	this->num -= 1;
	return (*this);
}

const Fixed Fixed::operator--(int) {
	const Fixed tmp(*this);
	this->num -= 1;
	return (tmp);
}

Fixed Fixed::operator+(const Fixed &ref) {
	Fixed result(this->toFloat() + ref.toFloat());
	return result;
}

Fixed Fixed::operator-(const Fixed &ref) {
	Fixed result(this->toFloat() - ref.toFloat());
	return result;
}

Fixed Fixed::operator*(const Fixed &ref) {
	Fixed result(this->toFloat() * ref.toFloat());
	return result;
}

Fixed Fixed::operator/(const Fixed &ref) {
	Fixed result(this->toFloat() / ref.toFloat());
	return result;
}
