#ifndef CPP_MODULE_WEAPON_H
#define CPP_MODULE_WEAPON_H

#include "iostream"

class Weapon {
private:
	std::string type;

public:
	Weapon(std::string weapon);
	const std::string &getType();
	void setType(const std::string new_type);
};

#endif //CPP_MODULE_WEAPON_H
