/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:36:39 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 15:49:55 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap() {
	std::cout << "New FragTrap Unknown!" << std::endl;
	name = "Unknown";
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "New FragTrap " << name << "!" << std::endl;
	this->name = name;
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "Bye FragTrap " << name << "!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref) {
	std::cout << "Copy FragTrap " << ref.name << "!" << std::endl;
	name = ref.name;
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