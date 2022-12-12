#ifndef EX00_CONVERT_H
#define EX00_CONVERT_H

#include "iostream"
#include "sstream"
#include <string>

enum e_type {
	NONE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL
};

enum e_bool {
	YES,
	NO
};

class Convert {
private:
	e_type type;
	char c;
	int i;
	float f;
	double d;
	e_bool is_point_zero;

	e_bool isSpecialValue(const std::string &arg);
	e_bool isCharOrFloat(const std::string &arg);
	e_bool isHaveDot(std::string &arg);
	void stringToChar(std::string &arg);
	void stringToInt(std::string &arg);
	void stringToFloat(std::string &arg);
	void stringToDouble(std::string &arg);

public:
	Convert();
	Convert(Convert &ref);
	Convert &operator=(const Convert &ref);
	~Convert();

	void detectTheType(std::string arg);
	void printConvertResult();
};


#endif //EX00_CONVERT_H
