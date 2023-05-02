#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <map>
#include <string>

class BitcoinExchange {
private:
	std::map<std::string, float> _exchangeData;

	void setExchangeData(const std::string &key, float value);
	float getExchangeRate(const std::string &key);
	float getClosestDate(std::string &key);

	void saveDataAfterParse(std::string &line);

	void multiplyBitcoinAfterParse(std::string &line);
	bool isValidDate(std::string &date);
	std::string getYear(std::string &date);
	std::string getMonth(std::string &date);
	std::string getDay(std::string &date);
	int dateToNumber(std::string &date);

public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &ref);
	BitcoinExchange &operator=(const BitcoinExchange &ref);

	void saveExchangeData();
	void readBitcoinData(char *fileName);
};


#endif //EX00_BITCOINEXCHANGE_HPP
