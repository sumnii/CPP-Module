//
// Created by Sumin Song on 2022/11/12.
//

#include "HumanA.h"

void HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}