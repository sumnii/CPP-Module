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
		std::cerr << (std::string)"data.csv 파일을 디렉토리에 추가해주세요." << std::endl;
	}

	while (in) {
		getline(in, str);
		saveDataAfterParse(str);
	}

//	std::map<std::string,float>::iterator it;
//	it = _exchangeData.begin();
//	while (it != _exchangeData.end()) {
//		std::cout << it->first << " | " << it->second << std::endl;
//		++it;
//	}
}

void BitcoinExchange::saveDataAfterParse(std::string line) {
	user_size_t splitComma = line.find(',');

	if (splitComma == std::string::npos)
		return ;

	std::string date = line.substr(0, splitComma);
	float exchangeRate = stof(line.substr(splitComma + 1));

	setExchangeData(date, exchangeRate);
}


void BitcoinExchange::readBitcoinData(char *fileName) {
	std::ifstream in(fileName);
	std::string str;

	if (in.is_open()) {
		getline(in, str);
	} else {
		throw (std::string)"could not open file.";
	}

	while (in) {
		getline(in, str);
//		std::cout << str << std::endl;
		if (str.empty())
			continue;
		try {
			multiplyBitcoinAfterParse(str);
		} catch (std::string errMsg) {
			std::cout << "Error: " << errMsg << std::endl;
		}
	}
}

void BitcoinExchange::multiplyBitcoinAfterParse(std::string line) {
	user_size_t splitBar = line.find('|');

	if (splitBar == std::string::npos)
		throw (std::string)"bad input => " + line ;

	std::string date = line.substr(0, splitBar - 1);
	if (!isValidateDate(date))
		throw (std::string)"bad input => " + line ;
	float value = stof(line.substr(splitBar + 2));
	if (value < 0)
		throw (std::string)"not a positive number.";
	if (value > 1000)
		throw (std::string)"too large a number.";

	std::cout << date << " : " << value << std::endl;
}

bool BitcoinExchange::isValidateDate(std::string date) {
	user_size_t firstSplitDash = date.find('-');
	if (firstSplitDash == std::string::npos)
		return false;

	int year = stoi(date.substr(0, firstSplitDash));
	if (year <= 0)
		return false;

	std::string monthAndDay = date.substr(firstSplitDash + 1);

	user_size_t secondSplitDash = monthAndDay.find('-');
	if (secondSplitDash == std::string::npos)
		return false;

	int month = stoi(monthAndDay.substr(0, secondSplitDash));
	if (month <= 0 || 12 < month)
		return false;

	int day = stoi(monthAndDay.substr(secondSplitDash + 1));
	if (day <= 0 || 31 < day)
		return false;

	return true;
}
