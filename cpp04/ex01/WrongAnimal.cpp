#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() {
	std::cout << "~ WrongAnimal constructor called ~" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "~ WrongAnimal destructor called ~" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref) {
	_type = ref._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref) {
	this->_type = ref._type;
	return (*this);
}

const std::string WrongAnimal::getType() const {
	return (_type);
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sounds 🔕 &#!" << std::endl;
}
