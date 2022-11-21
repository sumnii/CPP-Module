#include "Dog.h"

Dog::Dog() {
	std::cout << "~ Dog constructor called ~" << std::endl;
	_type = "Dog";
	brain = new Brain();
}

Dog::~Dog() {
	std::cout << "~ Dog destructor called ~" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &ref) {
	_type = ref._type;
}

Dog &Dog::operator=(const Dog &ref) {
	this->_type = ref._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Dog sounds 🐶 월월" << std::endl;
}
