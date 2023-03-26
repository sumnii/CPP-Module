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


void BitcoinExchange::setExchangeData(const std::string &key, float value) {
	_exchangeData[key] = value;
}

float BitcoinExchange::getExchangeRate(const std::string &key) {
	if (_exchangeData.count(key) == 1)
		return (_exchangeData[key]);
	return (-1);
}

float BitcoinExchange::getClosestDateDate(std::string &key) {
	std::string year = getYear(key);
	std::string month = getMonth(key);
	std::string day = getDay(key);

	std::map<std::string, float>::iterator itr = _exchangeData.begin();
	while (true) {
		std::string itrDate = itr->first;
		std::string itrNextDate = (++itr)->first;
		if (getYear(itrDate) <= year
			&& getMonth(itrDate) <= month
			&& getDay(itrDate) < day
			&& year <= getYear(itrNextDate)
			&& month <= getMonth(itrNextDate)
			&& day < getDay(itrNextDate))
			return (--itr)->second;
	}
}


void BitcoinExchange::saveExchangeData() {
	std::ifstream in("data.csv");
	std::string str;

	if (in.is_open()) {
		getline(in, str);
	} else {
		throw (std::string)"data.csv 파일을 디렉토리에 추가해주세요.";
	}

	while (in) {
		getline(in, str);
		saveDataAfterParse(str);
	}
}

void BitcoinExchange::saveDataAfterParse(std::string &line) {
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
		if (str.empty())
			continue;
		try {
			multiplyBitcoinAfterParse(str);
		} catch (std::string errMsg) {
			std::cout << "Error: " << errMsg << std::endl;
		}
	}
}

void BitcoinExchange::multiplyBitcoinAfterParse(std::string &line) {
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

	float exchangeRate = getExchangeRate(date);
	if (exchangeRate == -1)
		exchangeRate = getClosestDateDate(date);
	std::cout << date << " => " << value << " = " << value*exchangeRate << std::endl;
}

bool BitcoinExchange::isValidateDate(std::string &date) {
	int year = stoi(getYear(date));
	if (year <= 0)
		return false;

	int month = stoi(getMonth(date));
	if (month <= 0 || month > 12)
		return false;

	int day = stoi(getDay(date));
	if (day <= 0 || day > 31)
		return false;

	return true;
}

std::string BitcoinExchange::getYear(std::string &date) {
	user_size_t firstSplitDash = date.find('-');
	if (firstSplitDash == std::string::npos)
		return NULL;

	return date.substr(0, firstSplitDash);
}

std::string BitcoinExchange::getMonth(std::string &date) {
	user_size_t SecondSplitDash = date.rfind('-');
	if (SecondSplitDash == std::string::npos)
		return NULL;

	return date.substr(SecondSplitDash - 2, SecondSplitDash);
}

std::string BitcoinExchange::getDay(std::string &date) {
	user_size_t SecondSplitDash = date.rfind('-');
	if (SecondSplitDash == std::string::npos)
		return NULL;

	return date.substr(SecondSplitDash + 1);
}
