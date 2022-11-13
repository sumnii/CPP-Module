#include "iostream"
#include "fstream"

int	main(int argc, char **argv) {
	std::ifstream file(argv[1]);
	std::string str;

	if (argc != 4) {
		std::cout << "  !! This program needs a filename, and two strings !!" << std::endl;
		return 0;
	}
	if (file.is_open()) {
		while (file)
			getline(file, str);
		std::cout << str << std::endl;
	} else {
		std::cout << "  !! Wrong filename !!" << std::endl;
	}
	return 0;
}