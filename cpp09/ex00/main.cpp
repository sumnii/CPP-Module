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

	BitcoinExchange program;
	try {
		program.saveExchangeData();
	} catch (std::string errMsg) {
		return err_exit(errMsg);
	}

	try {
		program.readBitcoinData(argv[1]);
	} catch (std::string errMsg) {
		return err_exit(errMsg);
	}

//	atexit(leaks);
	return 0;
}
