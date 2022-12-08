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
		return (NO);
	} else {
		i = arg.find("f");
		if (i != std::string::npos)
			arg.resize(arg.length() - 1);
		double d = 0.0;
		std::stringstream ssDouble(arg);
		ssDouble >> d;
		this->d = d;
		return (YES);
	}
}

void Convert::detectTheType(std::string arg) {
	switch (isCharOrFloat(arg)) {
		case YES:
			std::cout << " < " << arg << " >" << std::endl;
			if (isHaveDot(arg) == NO) {
				type = CHAR;
				this->c = arg[0];
				std::cout << "type is " << type << std::endl;
				std::cout << "char : " << c << std::endl;
				std::cout << "float : " << (float)c << "f" << std::endl;
				std::cout << "int : " << (int)c << std::endl;
				std::cout << "double : " << (double)c << std::endl;
			} else {
				type = FLOAT;
				std::cout << "type is " << type << std::endl;
				std::cout << "char : " << (char)f << std::endl;
				std::cout << "float : " << (float)f << "f" << std::endl;
				std::cout << "int : " << (int)f << std::endl;
				std::cout << "double : " << f << std::endl;
			}
			break;
		case NO:
			if (isHaveDot(arg) == NO) {
				type = INT;
				std::cout << "type is " << type << std::endl;
				std::cout << "char : " << (char)d << std::endl;
				std::cout << "float : " << (float)d << "f" << std::endl;
				std::cout << "int : " << (int)d << std::endl;
				std::cout << "double : " << d << std::endl;
			} else {
				type = DOUBLE;
				std::cout << "type is " << type << std::endl;
				std::cout << "char : " << (char)d << std::endl;
				std::cout << "float : " << (float)d << "f" << std::endl;
				std::cout << "int : " << (int)d << std::endl;
				std::cout << "double : " << d << std::endl;
			}
	}
}
