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

	static int isChar(char argv[]);

public:
	Convert();
	Convert(Convert &ref);
	Convert &operator=(Convert &ref);
	~Convert();

	void detectTheType(char argv[]);
//	void printChar();
//	void printInt();
//	void printFloat();
//	void printDouble();
};


#endif //EX00_CONVERT_H
