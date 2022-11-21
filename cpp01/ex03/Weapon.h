/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:56:04 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_WEAPON_H
#define CPP_MODULE_WEAPON_H

#include "iostream"

class Weapon {
private:
	std::string type;

public:
	Weapon(std::string weapon);
	const std::string &getType();
	void setType(const std::string new_type);
};

#endif //CPP_MODULE_WEAPON_H
