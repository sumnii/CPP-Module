#ifndef EX00_CONVERT_H
#define EX00_CONVERT_H

#include "iostream"
#include "sstream"

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

	static int isCharOrFloat(const std::string& arg);

public:
	Convert();
	Convert(Convert &ref);
	Convert &operator=(const Convert &ref);
	~Convert();

	void detectTheType(std::string arg);
//	void printChar();
//	void printInt();
//	void printFloat();
//	void printDouble();
};


#endif //EX00_CONVERT_H
