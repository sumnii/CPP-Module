#include "PhoneBook.h"

int cmd_type(std::string cmd){
	if (cmd == "a")
		return (CMD_ADD);
	else if (cmd == "s")
		return (CMD_SEARCH);
	else if (cmd == "e")
		return (CMD_EXIT);
	else
	return (CMD_ELSE);
}

int main() {
	PhoneBook pb;
	std::string cmd;

	while (true) {
		std::cout << "명령을 입력하세요.\nADD | SEARCH | EXIT\n";
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
				std::cout << "다시 ";
		}
	}
}
