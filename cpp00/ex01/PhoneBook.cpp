#include "PhoneBook.h"

PhoneBook::PhoneBook() {
	save_cnt = 0;
}

void PhoneBook::add_contact() {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone;
	std::string secret;


	std::cout << std::endl << "이름을 입력하세요." << std::endl << "> ";
	std::getline(std::cin, first_name);
	std::cout << "성을 입력하세요." << std::endl << "> ";
	std::getline(std::cin, last_name);
	std::cout << "닉네임을 입력하세요." << std::endl << "> ";
	std::getline(std::cin, nickname);
	std::cout << "전화번호를 입력하세요." << std::endl << "> ";
	std::getline(std::cin, phone);
	std::cout << "비밀을 입력하세요." << std::endl << "> ";
	std::getline(std::cin, secret);
	std::cout << std::endl;
	contacts[save_cnt].setContact(FIRST_NAME, first_name);
	contacts[save_cnt].setContact(LAST_NAME, last_name);
	contacts[save_cnt].setContact(NICKNAME, nickname);
	contacts[save_cnt].setContact(PHONE, phone);
	contacts[save_cnt].setContact(SECRET, secret);
	++save_cnt;
}

void PhoneBook::search_contact() {
	std::string idx;
	std::string field;

	std::cout << std::endl;
	if (save_cnt == 0) {
		std::cout << "저장된 연락처가 없습니다." << std::endl << std::endl;
		return;
	}
	std::cout << std::setw(12) << "FIST NAME" << std::setw(11) << "LAST NAME" << std::setw(11) << "NICKNAME" << std::setw(11) << "PHONE" << std::endl;
	for (int i = 0; i < save_cnt; ++i) {
		std::cout << i << "|";
		for (int column = 0; column < 4; ++column) {
			field = contacts[i].getContact(column);
			if (field.length() >= 10) {
				field.resize(10);
				field.replace(9, 1, ".");
			}
			if (column == 3)
				std::cout << std::setw(10) << field << std::endl;
			else
				std::cout << std::setw(10) << field << "|";
		}
	}
	while (true) {
		std::cout << std::endl << "인덱스를 입력하세요." << std::endl << "> ";
		std::getline(std::cin, idx);
		std::cout << std::endl;
		if (std::stoi(idx) >= save_cnt || std::stoi(idx) < 0 || std::stoi(idx) > 4) {
			std::cout << " 유효하지 않은 인덱스입니다." << std::endl << std::endl;
			continue;
		}
		print_contact(std::stoi(idx));
		break;
	}
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
