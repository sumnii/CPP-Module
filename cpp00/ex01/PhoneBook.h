/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:35:30 by sumsong           #+#    #+#             */
/*   Updated: 2022/11/22 19:46:04 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULE_PHONEBOOK_H
#define CPP_MODULE_PHONEBOOK_H

#include "Contact.h"
#include "iomanip"
#include "cctype"

#define CMD_ELSE	0
#define CMD_ADD		1
#define CMD_SEARCH	2
#define CMD_EXIT	3

#define FIRST_NAME	0
#define LAST_NAME	1
#define NICKNAME	2
#define PHONE		3
#define SECRET		4

class PhoneBook {
private:
	Contact contacts[8];
	int save_cnt;

public:
	PhoneBook();

	std::string get_input_contact(int field);
	bool is_valid_phone_number(std::string str);
	static bool is_valid_field(std::string content);
	void add_contact();
	void search_contact();
	static bool is_valid_index(std::string str);
	void print_contact(int i);
};

#endif //CPP_MODULE_PHONEBOOK_H
