#include "PhoneBook.h"

PhoneBook::PhoneBook() {
	save_cnt = 0;
}

void PhoneBook::add_contact() {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone;
	std::string secret;

	std::cout << "이름을 입력하세요." << std::endl << " > ";
	std::getline(std::cin, first_name);
	std::cout << "성을 입력하세요." << std::endl << " > ";
	std::getline(std::cin, last_name);
	std::cout << "닉네임을 입력하세요." << std::endl << " > ";
	std::getline(std::cin, nickname);
	std::cout << "전화번호를 입력하세요." << std::endl << " > ";
	std::getline(std::cin, phone);
	std::cout << "비밀을 입력하세요." << std::endl << " > ";
	std::getline(std::cin, secret);
	this->contacts[save_cnt].setContact(FIRST_NAME, first_name);
	this->contacts[save_cnt].setContact(LAST_NAME, last_name);
	this->contacts[save_cnt].setContact(NICKNAME, nickname);
	this->contacts[save_cnt].setContact(PHONE, phone);
	this->contacts[save_cnt].setContact(SECRET, secret);
	++save_cnt;
}

void PhoneBook::search_contact() {
	std::string idx;
	std::string field;

	for (int i = 0; i < save_cnt; ++i) {
		for (int column = 0; column < 5; ++column) {
			field = contacts[i].getContact(column);
			if (field.length() >= 10) {
				field.resize(10);
				field.replace(9, 1, ".");
			}
			if (column == 4)
				std::cout << std::setw(10) << field << std::endl;
			else
				std::cout << std::setw(10) << field << "|";
		}
	}
	std::cout << "인덱스를 입력하세요." << std::endl << " > ";
	std::getline(std::cin, idx);
	if (std::stoi(idx) >= save_cnt) {
		std::cout << "저장된 연락처가 없습니다." << std::endl;
		return;
	}
	print_contact(std::stoi(idx));
}

void PhoneBook::print_contact(int i) {
	for (int column = 0; column < 5; ++column) {
		switch (column) {
			case FIRST_NAME:
				std::cout << std::setw(10) << "first name" << " : ";
				break;
			case LAST_NAME:
				std::cout << std::setw(10) << "last name" << " : ";
				break;
			case PHONE:
				std::cout << std::setw(10) << "phone" << " : ";
				break;
			case NICKNAME:
				std::cout << std::setw(10) << "nickname" << " : ";
				break;
			case SECRET:
				std::cout << std::setw(10) << "secret" << " : ";
				break;
		}
		std::cout << contacts[i].getContact(column) << std::endl;
	}
};
