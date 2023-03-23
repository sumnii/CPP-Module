#include "PmergeMe.hpp"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks RPN");
}

int err_exit(std::string err) {
	std::cerr << err << std::endl;
	return 1;
}

int main(int argc, char *argv[]) {
	if (argc < 2)
		return err_exit("type > ./PMergeMe .. a positive integer sequence ...");

	PmergeMe program;
	program.pushArgIntoContainer(argc, argv);
//	atexit(leaks);
	return 0;
}
