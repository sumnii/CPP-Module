/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:45:18 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 17:03:18 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int main() {
	ClapTrap tmp;
	std::cout << std::endl;

	ClapTrap clap = ClapTrap("CLAP");
	std::cout << std::endl;

	ScavTrap tmp2;
	std::cout << std::endl;

	ScavTrap scav = ScavTrap("SCAV");
	std::cout << std::endl;

	ScavTrap scav_cp(scav);
	std::cout << std::endl;
	std::cout << std::endl;

	clap.attack("SCAV");
	scav.takeDamage(0);
	std::cout << std::endl;

	scav.attack("CLAP");
	clap.takeDamage(20);
	std::cout << std::endl;

	scav.beRepaired(10);
	scav.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
}