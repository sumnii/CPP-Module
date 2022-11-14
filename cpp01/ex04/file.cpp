#include "file.h"

e_bool check_arg(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "  !! This program needs a filename, and two strings !!" << std::endl;
		return KO;
	} else if (((std::string) argv[1]).empty()
			   || ((std::string) argv[2]).empty()
			   || ((std::string) argv[3]).empty()) {
		std::cout << "  !! Parameters are empty !!" << std::endl;
		return KO;
	}
	return OK;
}