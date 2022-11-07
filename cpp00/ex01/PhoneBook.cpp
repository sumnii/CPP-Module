#include "PhoneBook.h"

PhoneBook::PhoneBook() : save_cnt(0) {
}

void PhoneBook::add_contact() {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone;
	std::string secret;

	std::cout << "이름을 입력하세요." << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "성을 입력하세요.\n";
	std::getline(std::cin, last_name);
	std::cout << "닉네임을 입력하세요.\n";
	std::getline(std::cin, nickname);
	std::cout << "전화번호를 입력하세요.\n";
	std::getline(std::cin, phone);
	std::cout << "비밀을 입력하세요.\n";
	std::getline(std::cin, secret);
	this->contacts[save_cnt].setFirstName(first_name);
	this->contacts[save_cnt].setLastName(last_name);
	this->contacts[save_cnt].setNickname(nickname);
	this->contacts[save_cnt].setPhone(phone);
	this->contacts[save_cnt].setSecret(secret);
	++save_cnt;
}

void PhoneBook::print_contact(){
	for (int i = 0; i < save_cnt; ++i)
	{
		std::cout << contacts[i].getFirstName() << std::endl;
		std::cout << contacts[i].getLastName() << std::endl;
		std::cout << contacts[i].getNickname() << std::endl;
		std::cout << contacts[i].getPhone() << std::endl;
		std::cout << contacts[i].getSecret() << std::endl;
	}
};
