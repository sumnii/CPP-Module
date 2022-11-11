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
		std::cout << "------------------------" << std::endl;
		std::cout << "   명령을 입력하세요.\n  ADD | SEARCH | EXIT\n";
		std::cout << "------------------------" << std::endl;
		std::cout << "> ";
		getline(std::cin, cmd);
		switch (cmd_type(cmd)) {
			case CMD_ADD:
				pb.add_contact();
				break;
			case CMD_SEARCH:
				pb.search_contact();
				break;
			case CMD_EXIT:
				exit(0);
			case CMD_ELSE:
				std::cout << std::endl;
		}
	}
}
