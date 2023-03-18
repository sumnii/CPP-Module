#include "BitcoinExchange.hpp"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks btc");
}

int err_exit(std::string err) {
	std::cerr << "Error: " << err << std::endl;
	return 1;
}

int main(int argc, char *argv[]) {
	if (argc != 2)
		return err_exit("could not open file.");
	(void)argv;

	BitcoinExchange program;
	program.saveExchangeData();

	try {
		program.readBitcoinData(argv[1]);
	} catch (const char *errMsg) {
		return err_exit(errMsg);
	}

//	atexit(leaks);
	return 0;
}
