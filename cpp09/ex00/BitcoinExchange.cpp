#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref) {
	*this = ref;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &ref) {
	if (this != &ref)
		*this = ref;
	return *this;
}

void BitcoinExchange::saveExchangeData() {
	std::ifstream in("data.csv");
	std::string str;

	if (in.is_open()) {
		getline(in, str);
	} else {
		std::cerr << "data.csv 파일을 디렉토리에 추가해주세요." << std::endl;
	}

	while (in) {
		getline(in, str);
		// save a data line
		std::cout << ">" << str << std::endl;
	}
}
