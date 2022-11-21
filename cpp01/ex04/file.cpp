/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/21 16:53:42 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

e_bool check_arg(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "  !! This program needs a filename, and two strings !!" << std::endl;
		return KO;
	} else if (((std::string) argv[1]).empty()
			   || ((std::string) argv[2]).empty()
			   || ((std::string) argv[3]).empty()) {
		std::cout << "  !! Parameters are empty !!" << std::endl;
		return KO;
	}
	return OK;
}

e_bool replace_file(const std::string &file_name, const std::string &s1, const std::string &s2) {
	std::ifstream in(file_name);
	std::ofstream out(file_name + ".replace", std::ios::trunc);
	std::string line;
	bool first = true;

	if (in.is_open()) {
		while (in.eof() == false) {
			getline(in, line);
			if (line.size() == 0) {
				out << std::endl;
				break;
			}
			std::string sed = sed_s1_to_s2(line, s1, s2);
			write_outfile(first, out, sed);
		}
	} else {
		std::cout << "  !! Wrong filename !!" << std::endl;
		return KO;
	}
	return OK;
}

std::string sed_s1_to_s2(std::string line, std::string s1, std::string s2) {
	size_t idx = line.find(s1);
	std::string front = line.substr(0, idx);
	std::string back = line.substr(idx + s1.size());
	bool find = (idx != std::string::npos);

	if (find) {
		find = ((idx = back.find(s1)) != std::string::npos);
		while (find) {
			front = front + s2 + back.substr(0, idx);
			back = back.substr(idx + s1.size());
			find = ((idx = back.find(s1)) != std::string::npos);
		}
		return (front + s2 + back);
	} else {
		return (line);
	}
}

void write_outfile(bool &first, std::ofstream &out, std::string line) {
	if (first) {
		out << line;
		first = false;
	} else
		out << std::endl << line;
}
