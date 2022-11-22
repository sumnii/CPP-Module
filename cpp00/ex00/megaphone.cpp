/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:32:47 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/22 19:45:56 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		for (int i = 1; i < argc; i++) {
			std::string str;
			str = argv[i];
			for (int j = 0; j < str[j]; j++)
				str[j] = toupper(str[j]);
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return (0);
}
