#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <map>

class BitcoinExchange {
private:
	std::map<std::string, float> _exchangeData;

public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &ref);
	BitcoinExchange &operator=(const BitcoinExchange &ref);

	void setExchangeData(const std::string &key, float value);
	float getExchangeRate(const std::string &key);
	float getClosestDateDate(std::string &key);

	void saveExchangeData();
	void saveDataAfterParse(std::string &line);

	void readBitcoinData(char *fileName);
	void multiplyBitcoinAfterParse(std::string &line);
	bool isValidateDate(std::string &date);
	std::string getYear(std::string &date);
	std::string getMonth(std::string &date);
	std::string getDay(std::string &date);
};


#endif //EX00_BITCOINEXCHANGE_HPP
