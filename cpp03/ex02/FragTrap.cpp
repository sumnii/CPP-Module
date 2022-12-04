#include "FragTrap.h"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "New FragTrap " << name << "!" << std::endl;
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "Bye FragTrap " << name << "!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref) : ClapTrap(ref.name) {
	std::cout << "Copy FragTrap " << ref.name << "!" << std::endl;
	hit_point = ref.hit_point;
	energy_point = ref.energy_point;
	attack_damage = ref.attack_damage;
}

FragTrap &FragTrap::operator=(const FragTrap &ref) {
	std::cout << "Copy Assignment FragTrap " << ref.name << "!" << std::endl;
	this->name = ref.name;
	this->hit_point = ref.hit_point;
	this->energy_point = ref.energy_point;
	this->attack_damage = ref.attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " Highfive!" << std::endl;
}