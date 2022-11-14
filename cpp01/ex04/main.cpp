#include "file.h"

int main(int argc, char **argv) {
	if (check_arg(argc, argv) == KO)
		return 1;
	std::ifstream file(argv[1]);
	std::ofstream out("tmp.replace", std::ios::trunc);
	std::string str;
	if (file.is_open()) {
		while (file) {
			getline(file, str);
			std::cout << "string : " << str << std::endl;
			out << str << std::endl;
		}
	} else {
		std::cout << "  !! Wrong filename !!" << std::endl;
	}
	return 0;
}