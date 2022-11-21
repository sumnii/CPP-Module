/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:45:18 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/20 15:09:22 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main() {
	ClapTrap tmp;
	ClapTrap one = ClapTrap("ONE");
	ClapTrap two = ClapTrap("TWO");
	ClapTrap three = ClapTrap(two);

	std::cout << std::endl;
	one.attack("TWO");
	two.takeDamage(5);
	std::cout << std::endl;

	two.attack("ONE");
	one.takeDamage(10);
	std::cout << std::endl;

	one.attack("TWO");
	one.beRepaired(5);
	std::cout << std::endl;

	two.beRepaired(5);
	two.attack("TWO-COPY");
	three.takeDamage(10);
	std::cout << std::endl;
}