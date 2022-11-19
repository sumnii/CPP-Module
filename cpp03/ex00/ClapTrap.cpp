#include "ClapTrap.h"

ClapTrap::ClapTrap() {
	std::cout << "New ClapTrap Unknown!" << std::endl;
	_name = "Unknown";
	_hit_point = 10;
	_energy_point = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "New ClapTrap " << name << "!" << std::endl;
	_name = name;
	_hit_point = 10;
	_energy_point = 10;
	_attack_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Bye ClapTrap " << _name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref) {
	std::cout << "Copy ClapTrap " << _name << "!" << std::endl;
	_name = ref._name;
	_hit_point = ref._hit_point;
	_energy_point = ref._energy_point;
	_attack_damage = ref._attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref) {
	std::cout << "Copy Assignment ClapTrap " << this->_name << "!" << std::endl;
	this->_name = ref._name;
	this->_hit_point = ref._hit_point;
	this->_energy_point = ref._energy_point;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}
