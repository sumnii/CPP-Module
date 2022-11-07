#ifndef CPP_MODULE_PHONEBOOK_H
#define CPP_MODULE_PHONEBOOK_H

#include "Contact.h"

#define CMD_ELSE	0
#define CMD_ADD		1
#define CMD_SEARCH	2
#define CMD_EXIT	3

class PhoneBook {
private:
	Contact contacts[8];
	int save_cnt;

public:
	void add_contact();
	void print_contact();
	PhoneBook();
};

#endif //CPP_MODULE_PHONEBOOK_H
