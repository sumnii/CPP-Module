#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H

#include "iostream"

class ClapTrap {
private:
	std::string _name;
	int _hit_point;
	int _energy_point;
	static int _attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &ref);
	ClapTrap &operator=(const ClapTrap &ref);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif //EX00_CLAPTRAP_H
