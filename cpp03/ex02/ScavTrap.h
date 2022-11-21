/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:45:18 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 15:53:00 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &ref);
	ScavTrap &operator=(const ScavTrap &ref);

	void guardGate();

	void attack(const std::string &target);
};


#endif //EX01_SCAVTRAP_H
