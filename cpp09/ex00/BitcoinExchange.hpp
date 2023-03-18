#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange {
private:
	static std::map<std::string, float> _exchangeData;

public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &ref);
	BitcoinExchange &operator=(const BitcoinExchange &ref);

	static void saveExchangeData();
	static void parseData(std::string line);
};


#endif //EX00_BITCOINEXCHANGE_HPP
