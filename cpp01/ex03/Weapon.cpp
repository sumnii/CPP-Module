#include "Weapon.h"

Weapon::Weapon(std::string weapon) {
	this->type = weapon;
}

const std::string &Weapon::getType() {
	return (this->type);
}

void Weapon::setType(const std::string new_type) {
	this->type = new_type;
}
