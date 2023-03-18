#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

#include "iostream"
#include <map>

class BitcoinExchange {
private:
	std::map<std::string, float> _bitcoinData;

public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &ref);
	BitcoinExchange &operator=(const BitcoinExchange &ref);
};


#endif //EX00_BITCOINEXCHANGE_HPP
