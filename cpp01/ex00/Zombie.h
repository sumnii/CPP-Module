/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/18 08:35:30 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_ZOMBIE_H
#define CPP_MODULE_ZOMBIE_H

#include "iostream"

class Zombie {
private:
	std::string name;

public:
	void	Announce(void);
	void	setName(const std::string name);
	~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif //CPP_MODULE_ZOMBIE_H
