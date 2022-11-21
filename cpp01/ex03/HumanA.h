/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:55:05 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_HUMANA_H
#define CPP_MODULE_HUMANA_H

#include "Weapon.h"

class HumanA {
private:
	std::string _name;
	Weapon &_weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	void attack(void);
};


#endif //CPP_MODULE_HUMANA_H
