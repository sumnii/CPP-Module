#include "WrongCat.h"

WrongCat::WrongCat() {
	std::cout << "~ WrongCat constructor called ~" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "~ WrongCat destructor called ~" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ref) {
	_type = ref._type;
}

WrongCat &WrongCat::operator=(const WrongCat &ref) {
	this->_type = ref._type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat sounds 😾 하악" << std::endl;
}
