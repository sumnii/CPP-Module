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
	std::cout << "~ Dog copy constructor called ~" << std::endl;
	_type = ref._type;
	brain = new Brain(*ref.brain);
}

Dog &Dog::operator=(const Dog &ref) {
	std::cout << "~ Dog copy assignment operator called ~" << std::endl;
	this->_type = ref._type;
	if (this->brain != ref.brain) {
		delete brain;
		this->brain = new Brain(*ref.brain);
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "🐶 월월" << std::endl;
}

Brain &Dog::getBrain() {
	return (*brain);
}
