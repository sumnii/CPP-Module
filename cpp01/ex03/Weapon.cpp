//
// Created by Sumin Song on 2022/11/12.
//

#include "Weapon.h"

const std::string &Weapon::getType() const {
	return (this->type);
}

void Weapon::setType(const std::string new_type) {
	this->type = new_type;
}