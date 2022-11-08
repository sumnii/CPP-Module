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
	void add_contact();
	void search_contact();
	bool is_valid_index(std::string str);
	void print_contact(int i);
	PhoneBook();
};

#endif //CPP_MODULE_PHONEBOOK_H
