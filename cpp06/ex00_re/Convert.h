#ifndef EX00_CONVERT_H
#define EX00_CONVERT_H

#include <iostream>
#include <sstream>
#include <limits>
#include <iomanip>
#include <cmath>

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

	void	charOrFloatOrNone(std::string arg);
	e_bool	isFloat(std::string arg);
	void	intOrDouble(std::string arg);

	e_bool	isNanType();
	e_bool	isInfType();
	e_bool	hasDecimalPoint();

	void	printChar();
	void	printInt();
	void	printFloat();
	void	printDouble();
	void	convertIntOrFloatOrDouble();
	void	noConvertType();

public:
	Convert(std::string arg);
	Convert(Convert &ref);
	Convert &operator=(const Convert &ref);
	~Convert();

	void	detectTheType(std::string arg);
	void	convertAndPrint();
};


#endif //EX00_CONVERT_H
