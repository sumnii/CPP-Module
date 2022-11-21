#ifndef CPP_MODULE_HUMANB_H
#define CPP_MODULE_HUMANB_H

#include "Weapon.h"

class HumanB {
private:
	Weapon *weapon;
	std::string name;

public:
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &weapon);
};


#endif //CPP_MODULE_HUMANB_H
