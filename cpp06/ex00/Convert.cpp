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


int Convert::isCharOrFloat(const std::string& arg) {
	double d = 0.0;

	std::stringstream ssDouble(arg);
	ssDouble >> d;

	if (ssDouble.fail())
		return (YES);
	return (NO);
}

void Convert::detectTheType(std::string arg) {
	if (isCharOrFloat(arg) == YES) {
		type = CHAR;
//		c = arg;
		std::cout << "type is CHAR or FLOAT : " << arg << std::endl;
	}
	else {
		std::cout << "type is INT or DOUBLE : " << arg << std::endl;
	}
}
