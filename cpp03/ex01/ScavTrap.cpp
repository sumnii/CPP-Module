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

ScavTrap::ScavTrap(const ScavTrap &ref) {
	std::cout << "Copy ScavTrap " << ref.name << "!" << std::endl;
	name = ref.name;
	hit_point = ref.hit_point;
	energy_point = ref.energy_point;
	attack_damage = ref.attack_damage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref) {
	std::cout << "Copy Assignment ScavTrap " << ref.name << "!" << std::endl;
	this->name = ref.name;
	this->hit_point = ref.hit_point;
	this->energy_point = ref.energy_point;
	this->attack_damage = ref.attack_damage;
	return (*this);
}
