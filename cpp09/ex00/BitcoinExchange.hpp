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

	void setExchangeData(const std::string key, float value);
	float getExchangeValue(const std::string key);

	void saveExchangeData();
	void parseData(std::string line);

	void readBitcoinData(char *fileName);
};


#endif //EX00_BITCOINEXCHANGE_HPP
