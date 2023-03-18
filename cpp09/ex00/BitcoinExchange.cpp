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


void BitcoinExchange::setExchangeData(const std::string key, float value) {
	_exchangeData[key] = value;
}

float BitcoinExchange::getExchangeValue(const std::string key) {
	return (_exchangeData[key]);
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

	std::map<std::string,float>::iterator it;
	it = _exchangeData.begin();
	while (it != _exchangeData.end()) {
		std::cout << it->first << " | " << it->second << std::endl;
		++it;
	}
}

void BitcoinExchange::parseData(std::string line) {
	user_size_t splitPoint = line.find(',');

	if (splitPoint == std::string::npos)
		return ;

	std::string key = line.substr(0, splitPoint);
	float value = stof(line.substr(splitPoint + 1));

	setExchangeData(key, value);
}
