#ifndef EX00_CONVERT_H
#define EX00_CONVERT_H

#include "iostream"
#include "sstream"
#include <string>
#include <limits>

enum e_type {
	NONE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

enum e_bool {
	YES,
	NO
};

class Convert {
private:
	e_type type;
	e_bool fail;
	char c;
	int i;
	float f;
	double d;

	Convert();

	e_bool isChar(std::string arg);
	e_bool isFloat(std::string arg);

	// e_bool isSpecialValue(std::string &arg);
	// e_bool isCharOrFloat(const std::string &arg);
	// e_bool isHaveDot(std::string &arg);

	// void checkNonprintable(char c);
	// void fillImpossible();

	// void stringToChar(std::string &arg);
	// void stringToInt(std::string &arg);
	// void stringToFloat(std::string &arg);
	// void stringToDouble(std::string &arg);

public:
	Convert(std::string arg);
	Convert(Convert &ref);
	Convert &operator=(const Convert &ref);
	~Convert();

	void detectTheType(std::string arg);
	void printConvertResult();
};


#endif //EX00_CONVERT_H
