#include "PhoneBook.h"

PhoneBook::PhoneBook() {
	save_cnt = 0;
	std::cout << std::endl << "  ~ WELCOME TO SUMSONG'S PHONEBOOK ~  " << std::endl << std::endl;
}

bool PhoneBook::is_valid_field(std::string content) {
	for (size_t i = 0; i < content.length(); ++i) {
		if (isspace(content[i]) == 0)
			return (true);
	}
	return (false);
}

std::string PhoneBook::get_input_contact(int field) {
	std::string content;

	while (true) {
		switch (field)
		{
			case FIRST_NAME:
				std::cout << std::endl << "이름을 입력하세요." << std::endl << "> ";
				break;
			case LAST_NAME:
				std::cout << std::endl << "성을 입력하세요." << std::endl << "> ";
				break;
			case PHONE:
				std::cout << std::endl << "전화번호를 입력하세요." << std::endl << "> ";
				break;
			case NICKNAME:
				std::cout << std::endl << "닉네임을 입력하세요." << std::endl << "> ";
				break;
			case SECRET:
				std::cout << std::endl << "비밀을 입력하세요." << std::endl << "> ";
				break;
		}
		std::getline(std::cin, content);
		if (is_valid_field(content))
			break;
		std::cout << std::endl << " !! 필수 입력입니다 !!" << std::endl;
	}
	return (content);
}

void PhoneBook::add_contact() {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone;
	std::string secret;

	int i = save_cnt >= 8 ? save_cnt % 8 : save_cnt;
	first_name = get_input_contact(FIRST_NAME);
	last_name = get_input_contact(LAST_NAME);
	nickname = get_input_contact(NICKNAME);
	phone = get_input_contact(PHONE);
	secret = get_input_contact(SECRET);
	std::cout << std::endl;
	contacts[i].setContact(FIRST_NAME, first_name);
	contacts[i].setContact(LAST_NAME, last_name);
	contacts[i].setContact(NICKNAME, nickname);
	contacts[i].setContact(PHONE, phone);
	contacts[i].setContact(SECRET, secret);
	++save_cnt;
}

void PhoneBook::search_contact() {
	std::string idx;
	std::string field;

	std::cout << std::endl;
	if (save_cnt == 0) {
		std::cout << " !! 저장된 연락처가 없습니다 !!" << std::endl << std::endl;
		return;
	}
	std::cout << std::setw(12) << "FIRST NAME" << std::setw(11) << "LAST NAME" << std::setw(11) << "NICKNAME" << std::setw(11) << "PHONE" << std::endl;
	int cnt = save_cnt > 8 ? 8 : save_cnt;
	for (int i = 0; i < cnt; ++i) {
		std::cout << i << "|";
		for (int column = 0; column < 4; ++column) {
			field = contacts[i].getContact(column);
			if (field.length() >= 10) {
				field.resize(10);
				field.replace(9, 1, ".");
			}
			std::cout << std::setw(10) << field << "|";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << "인덱스를 입력하세요." << std::endl << "> ";
	std::getline(std::cin, idx);
	std::cout << std::endl;
	if (is_valid_index(idx) == false || std::stoi(idx) >= save_cnt) {
		std::cout << " !! 유효하지 않은 인덱스입니다 !!" << std::endl << std::endl;
		return;
	}
	print_contact(std::stoi(idx));
}

bool PhoneBook::is_valid_index(std::string str) {
	if (str.size() == 0)
		return (false);
	for (size_t i = 0; i < str.length(); ++i) {
		if (isdigit(str[i]) == 0)
			return (false);
	}
	return (true);
}

void PhoneBook::print_contact(int i) {
	for (int column = 0; column < 5; ++column) {
		switch (column) {
			case FIRST_NAME:
				std::cout << std::setw(10) << "first name" << " : ";
				break;
			case LAST_NAME:
				std::cout << std::setw(10) << "last name" << " : ";
				break;
			case PHONE:
				std::cout << std::setw(10) << "phone" << " : ";
				break;
			case NICKNAME:
				std::cout << std::setw(10) << "nickname" << " : ";
				break;
			case SECRET:
				std::cout << std::setw(10) << "secret" << " : ";
				break;
		}
		std::cout << contacts[i].getContact(column) << std::endl;
	}
	std::cout << std::endl;
};
