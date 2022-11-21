/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong   <sumsong@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/18 08:35:30 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_FILE_H
#define EX04_FILE_H

#include "iostream"
#include "string"
#include "fstream"

enum e_bool {
	OK,
	KO
};

e_bool check_arg(int argc, char **argv);
e_bool replace_file(const std::string &file_name, const std::string &s1, const std::string &s2);
std::string sed_s1_to_s2(std::string line, std::string s1, std::string s2);
void write_outfile(bool &first, std::ofstream &out, std::string line);

#endif //EX04_FILE_H
