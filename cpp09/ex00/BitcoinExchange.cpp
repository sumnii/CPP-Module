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
		parseData(str);
	}
}
void BitcoinExchange::parseData(std::string line) {
	user_size_t splitPoint = line.find(',');
	if (splitPoint == std::string::npos)
		return ;
	std::string key = line.substr(0, splitPoint - 1);
	std::string value = line.substr(splitPoint + 1);
	std::cout << key << " | " << value << std::endl;
}
