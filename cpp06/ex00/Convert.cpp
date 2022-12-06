#include "Convert.h"

Convert::Convert() : type(-1), c(0), i(0), f(0), d(0) {}

Convert::Convert(Convert &ref)
		: type(ref.type), c(ref.c), i(ref.i), f(ref.f), d(ref.d) {}

Convert &Convert::operator=(const Convert &ref) {
	type = ref.type;
	c = ref.c;
	i = ref.i;
	f = ref.f;
	d = ref.d;
	return (*this);
}

Convert::~Convert() {}


int Convert::isCharOrFloat(const std::string &arg) {
	double d = 0.0;

	std::stringstream ssDouble(arg);
	ssDouble >> d;

	if (ssDouble.fail())
		return (YES);
	return (NO);
}

int Convert::isHaveDot(std::string &arg) {
	std::string::size_type i;

	i = arg.find(".");
	if (i == std::string::npos
		|| arg.length() == 1) {
		type = CHAR;
		c = arg[0];
		return (NO);
	} else {
		type = FLOAT;
		arg.resize(arg.length() - 1);
		float f = 0.0;
		std::stringstream ssFloat(arg);
		ssFloat >> f;
		this->f = f;
		return (YES);
	}
}

void Convert::detectTheType(std::string arg) {
	switch (isCharOrFloat(arg)) {
		case YES:
			std::cout << " < " << arg << " >" << std::endl;
			if (isHaveDot(arg) == NO) {
				std::cout << "type is " << type << std::endl;
				std::cout << "char : " << c << std::endl;
				std::cout << "float : " << (float)c << "f" << std::endl;
			} else {
				std::cout << "type is " << type << std::endl;
				std::cout << "char : " << (char)f << std::endl;
				std::cout << "float : " << f << "f" << std::endl;
			}
			break;
		case NO:
			std::cout << "type is INT or DOUBLE : " << arg << std::endl;
	}
//	if (isCharOrFloat(arg) == YES) {
//		type = CHAR;
//		c = arg;
//		std::cout << "type is CHAR or FLOAT : " << arg << std::endl;
//	}
//	else {
//		std::cout << "type is INT or DOUBLE : " << arg << std::endl;
//	}
}
