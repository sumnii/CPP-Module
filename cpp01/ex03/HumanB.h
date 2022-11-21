/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:55:05 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_HUMANB_H
#define CPP_MODULE_HUMANB_H

#include "Weapon.h"

class HumanB {
private:
	Weapon *weapon;
	std::string name;

public:
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &weapon);
};


#endif //CPP_MODULE_HUMANB_H
