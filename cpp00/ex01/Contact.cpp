#include "Contact.h"

const std::string Contact::getContact(int i) const {
	return _contact[i];
}

void Contact::setContact(int field, const std::string contents) {
	_contact[field] = contents;
}