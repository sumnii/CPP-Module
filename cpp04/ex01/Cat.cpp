#include "Cat.h"

Cat::Cat() {
	std::cout << "~ Cat constructor called ~" << std::endl;
	_type = "Cat";
	brain = new Brain();
}

Cat::~Cat() {
	std::cout << "~ Cat destructor called ~" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &ref) {
	_type = ref._type;
}

Cat &Cat::operator=(const Cat &ref) {
	this->_type = ref._type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Cat sounds 🐱 야옹" << std::endl;
}
