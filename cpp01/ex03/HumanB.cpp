//
// Created by Sumin Song on 2022/11/12.
//

#include "HumanB.h"

void HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}