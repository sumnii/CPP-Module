//
// Created by Sumin Song on 2022/11/12.
//

#ifndef CPP_MODULE_HUMANA_H
#define CPP_MODULE_HUMANA_H

#include "Weapon.h"

class HumanA {
private:
	std::string _name;
	Weapon &_weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	void attack(void);
};


#endif //CPP_MODULE_HUMANA_H
