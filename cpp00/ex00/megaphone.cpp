/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:32:47 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/23 19:01:11 by sumsong          ###   ########seoul.kr  */
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
			for (size_t j = 0; j < str.length(); j++)
				str[j] = toupper(str[j]);
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return (0);
}
