/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:36:39 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 15:47:07 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_FRAGTRAP_H
#define EX02_FRAGTRAP_H

#include "ScavTrap.h"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &ref);
	FragTrap &operator=(const FragTrap &ref);

	void highFivesGuys(void);
};

#endif //EX02_FRAGTRAP_H
