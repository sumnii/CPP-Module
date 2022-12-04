#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H

#include "iostream"

class ClapTrap {
private:
	std::string name;
	unsigned int hit_point;
	unsigned int energy_point;
	unsigned int attack_damage;

public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &ref);
	ClapTrap &operator=(const ClapTrap &ref);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif //EX00_CLAPTRAP_H
