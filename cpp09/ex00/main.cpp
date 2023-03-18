#include "BitcoinExchange.hpp"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks btc");
}

int main() {
	BitcoinExchange exchange;
	exchange.saveExchangeData();

//	atexit(leaks);
	return 0;
}
