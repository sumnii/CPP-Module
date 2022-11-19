#include "ClapTrap.h"

ClapTrap::ClapTrap() {
	std::cout << "New ClapTrap Unknown!" << std::endl;
	name = "Unknown";
	hit_point = 10;
	energy_point = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "New ClapTrap " << name << "!" << std::endl;
	this->name = name;
	hit_point = 10;
	energy_point = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Bye ClapTrap " << name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref) {
	std::cout << "Copy ClapTrap " << name << "!" << std::endl;
	name = ref.name;
	hit_point = ref.hit_point;
	energy_point = ref.energy_point;
	attack_damage = ref.attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref) {
	std::cout << "Copy Assignment ClapTrap " << this->name << "!" << std::endl;
	this->name = ref.name;
	this->hit_point = ref.hit_point;
	this->energy_point = ref.energy_point;
	this->attack_damage = ref.attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->name << "attacks " << target << ", " << std::endl;
	if (this->hit_point == 0 || this->energy_point == 0) {
		std::cout << "But ClapTrap " << this->name << "can't do anything.." << std::endl;
		return ;
	}
	std::cout << "causing " << this->attack_damage << " points of damage!" << std::endl;
	--this->energy_point;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << "takes " << amount << " points of damage!" << std::endl;
	this->hit_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << "is repaired, getting " << amount << " points of HP" << std::endl;
	this->hit_point += amount;
}
