/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:45:18 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/20 15:07:36 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap()
		: name("Unknown"), hit_point(10), energy_point(10), attack_damage(0) {
	std::cout << "New ClapTrap Unknown!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
		: name(name), hit_point(10), energy_point(10), attack_damage(0) {
	std::cout << "New ClapTrap " << name << "!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Bye ClapTrap " << name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref) {
	std::cout << "Copy ClapTrap " << ref.name << "!" << std::endl;
	name = ref.name;
	hit_point = ref.hit_point;
	energy_point = ref.energy_point;
	attack_damage = ref.attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref) {
	std::cout << "Copy Assignment ClapTrap " << ref.name << "!" << std::endl;
	this->name = ref.name;
	this->hit_point = ref.hit_point;
	this->energy_point = ref.energy_point;
	this->attack_damage = ref.attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", ";
	if (this->hit_point == 0 || this->energy_point == 0) {
		std::cout << "But ClapTrap " << this->name << " can't do anything.." << std::endl;
		return;
	}
	std::cout << "causing " << this->attack_damage << " points of damage!" << std::endl;
	--this->energy_point;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	if (amount > this->hit_point)
		this->hit_point = 0;
	else
		this->hit_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hit_point == 0 || this->energy_point == 0) {
		std::cout << "ClapTrap " << this->name << " try to repair, but can't do anything.." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " is repaired, getting " << amount << " points of HP!" << std::endl;
	this->hit_point += amount;
	--this->energy_point;
}
