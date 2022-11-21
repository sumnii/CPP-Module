/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:47:59 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void) {
	Zombie *foo;
	Zombie *halo;

	foo = newZombie("Foo");
	foo->Announce();
	randomChump("Ola");
	halo = newZombie("HALO");
	halo->Announce();
	randomChump("Random");
	delete foo;
	delete halo;
}
