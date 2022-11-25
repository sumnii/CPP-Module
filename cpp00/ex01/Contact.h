#ifndef CPP_MODULE_CONTACT_H
#define CPP_MODULE_CONTACT_H

#include "iostream"

class Contact {
private:
	std::string _contact[5];

public:
	const std::string getContact(int field) const;
	void setContact(int field, const std::string contents);
};

#endif //CPP_MODULE_CONTACT_H
