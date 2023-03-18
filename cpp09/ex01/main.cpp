#include "RPN.hpp"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks RPN");
}

int err_exit(std::string err) {
	std::cerr << "Error: " << err << std::endl;
	return 1;
}

int main(int argc, char *argv[]) {
	if (argc != 2)
		return err_exit("type > ./RPN \"expression\"");

	RPN program;
	program.setExpression(argv[1]);
	program.calculate();
	try {
		int result = program.getResult();
		std::cout << result << std::endl;
	} catch (const char *err) {
		std::cerr << err << std::endl;
	}

//	atexit(leaks);
	return 0;
}
