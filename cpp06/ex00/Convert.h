#ifndef EX00_CONVERT_H
#define EX00_CONVERT_H

#include "iostream"
#include "sstream"
#include <string>

enum e_type {
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
	int type;
	char c;
	int i;
	float f;
	double d;

	int isCharOrFloat(const std::string &arg);
	int isHaveDot(std::string &arg);
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
