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
	std::cout << "~ Cat copy constructor called ~" << std::endl;
	_type = ref._type;
	brain = new Brain(*ref.brain);
	*brain = *(ref.brain);
}

Cat &Cat::operator=(const Cat &ref) {
	std::cout << "~ Cat copy assignment operator called ~" << std::endl;
	this->_type = ref._type;
	if (this->brain != ref.brain) {
		delete brain;
		this->brain = new Brain(*ref.brain);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Cat sounds 🐱 야옹" << std::endl;
}
