#ifndef CPP_MODULE_CONTACT_H
#define CPP_MODULE_CONTACT_H

#include "iostream"

class Contact {
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone;
	std::string _secret;

public:
	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickname() const;
	const std::string &getPhone() const;
	const std::string &getSecret() const;
	void setFirstName(const std::string &firstName);
	void setLastName(const std::string &lastName);
	void setNickname(const std::string &nickname);
	void setPhone(const std::string &phone);
	void setSecret(const std::string &secret);
};

#endif //CPP_MODULE_CONTACT_H