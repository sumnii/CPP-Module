/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:53:02 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(void) {
	Harl harl;

	harl.complain("debug");
	harl.complain("DEBUG");
	harl.complain("info");
	harl.complain("INFO");
	harl.complain("warning");
	harl.complain("WARNING");
	harl.complain("error");
	harl.complain("ERROR");
}
