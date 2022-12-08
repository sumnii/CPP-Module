#include "Dog.h"

Dog::Dog() {
	std::cout << "~ Dog constructor called ~" << std::endl;
	_type = "Dog";
}

Dog::~Dog() {
	std::cout << "~ Dog destructor called ~" << std::endl;
}

Dog::Dog(const Dog &ref) {
	_type = ref._type;
}

Dog &Dog::operator=(const Dog &ref) {
	this->_type = ref._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "🐶 월월" << std::endl;
}
