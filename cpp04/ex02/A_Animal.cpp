#include "A_Animal.h"

A_Animal::A_Animal() {
	std::cout << "~ A_Animal constructor called ~" << std::endl;
	_type = "A_Animal";
}

A_Animal::~A_Animal() {
	std::cout << "~ A_Animal destructor called ~" << std::endl;
}

A_Animal::A_Animal(const A_Animal &ref) {
	std::cout << "~ A_Animal copy constructor called ~" << std::endl;
	_type = ref._type;
}

A_Animal &A_Animal::operator=(const A_Animal &ref) {
	std::cout << "~ A_Animal copy assignment operator called ~" << std::endl;
	this->_type = ref._type;
	return (*this);
}

const std::string &A_Animal::getType() const {
	return (_type);
}

void A_Animal::makeSound() const {
	std::cout << "🔕 ..." << std::endl;
}
