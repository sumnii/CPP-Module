#include "Animal.h"

Animal::Animal() {
	std::cout << "~ Animal constructor called ~" << std::endl;
	_type = "Animal";
}

Animal::~Animal() {
	std::cout << "~ Animal destructor called ~" << std::endl;
}

Animal::Animal(const Animal &ref) {
	std::cout << "~ Animal copy constructor called ~" << std::endl;
	_type = ref._type;
}

Animal &Animal::operator=(const Animal &ref) {
	std::cout << "~ Animal copy assignment operator called ~" << std::endl;
	this->_type = ref._type;
	return (*this);
}

const std::string &Animal::getType() const {
	return (_type);
}

void Animal::makeSound() const {
	std::cout << "Animal sounds 🔕 ..." << std::endl;
}
