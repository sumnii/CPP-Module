/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:45:18 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 17:04:20 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

int main() {
	ClapTrap clap("CLAP");
	std::cout << std::endl;

	ScavTrap scav("SCAV");
	std::cout << std::endl;

	FragTrap tmp;
	std::cout << std::endl;

	FragTrap frag("FRAG");
	std::cout << std::endl;
	std::cout << std::endl;


	scav.attack("FLAG");
	frag.takeDamage(20);
	std::cout << std::endl;

	frag.attack("SCAV");
	scav.takeDamage(30);
	std::cout << std::endl;

	frag.beRepaired(20);
	frag.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
}