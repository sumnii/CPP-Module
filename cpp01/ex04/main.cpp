#include "iostream"
#include "fstream"

int	main(int argc, char **argv) {
	std::ifstream file(argv[1]);
	std::ofstream out((std::string)argv[1] + ".replace", std::ios::trunc);
	std::string str;

	if (argc != 4) {
		std::cout << "  !! This program needs a filename, and two strings !!" << std::endl;
		return 0;
	}
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