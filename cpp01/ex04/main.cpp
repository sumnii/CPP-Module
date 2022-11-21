/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:53:42 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int main(int argc, char **argv) {
	if (check_arg(argc, argv) == KO)
		return 1;
	if (replace_file(argv[1], argv[2], argv[3]) == KO)
		return 1;
	return 0;
}
