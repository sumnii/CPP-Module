#include "PhoneBook.h"

int cmd_type(std::string cmd){
	if (cmd == "ADD")
		return (CMD_ADD);
	else if (cmd == "SEARCH")
		return (CMD_SEARCH);
	else if (cmd == "EXIT")
		return (CMD_EXIT);
	else
	return (CMD_ELSE);
}

int main() {
	PhoneBook pb;
	std::string cmd;

	while (true) {
		std::cout << "명령을 입력하세요.\n1. ADD\n2. SEARCH\n3. EXIT\n";
		getline(std::cin, cmd);
		std::cout << "입력 커맨드 : " << cmd << std::endl;
		switch (cmd_type(cmd)) {
			case CMD_ADD:
				std::cout << "add를 입력했습니다.\n";
				pb.add_contact();
				break;
			case CMD_SEARCH:
				std::cout << "search를 입력\n";
				pb.print_contact();
				break;
			case CMD_EXIT:
				std::cout << "exit를 입력\n";
				exit(0);
			case CMD_ELSE:
				std::cout << "다시 ";
		}
	}
}
