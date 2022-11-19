#include "ScavTrap.h"

ScavTrap::ScavTrap() {
	std::cout << "New ScavTrap " << name << "!" << std::endl;
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "New ScavTrap " << name << "!" << std::endl;
	this->name = name;
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "Bye ScavTrap " << name << "!" << std::endl;
}