#include "Contact.h"

const std::string &Contact::getFirstName() const {
	return _first_name;
}

const std::string &Contact::getLastName() const {
	return _last_name;
}

const std::string &Contact::getNickname() const {
	return _nickname;
}

const std::string &Contact::getPhone() const {
	return _phone;
}

const std::string &Contact::getSecret() const {
	return _secret;
};

void Contact::setFirstName(const std::string &firstName) {
	_first_name = firstName;
}

void Contact::setLastName(const std::string &lastName) {
	_last_name = lastName;
}

void Contact::setNickname(const std::string &nickname) {
	_nickname = nickname;
}

void Contact::setPhone(const std::string &phone) {
	_phone = phone;
}

void Contact::setSecret(const std::string &secret) {
	_secret = secret;
}