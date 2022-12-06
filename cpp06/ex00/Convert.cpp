#include "Convert.h"

Convert::Convert() : type(-1), c(0), i(0), f(0), d(0) {}

Convert::Convert(Convert &ref)
		: type(ref.type), c(ref.c), i(ref.i), f(ref.f), d(ref.d) {}

Convert &Convert::operator=(Convert &ref) {
	type = ref.type;
	c = ref.c;
	i = ref.i;
	f = ref.f;
	d = ref.d;
	return (*this);
}

Convert::~Convert() {}


int Convert::isChar(char argv[]) {
	double d = 0.0;

	std::stringstream ssDouble(argv);
	ssDouble >> d;

	if (ssDouble.fail())
		return (YES);
	return (NO);
}

void Convert::detectTheType(char argv[]) {
	if (isChar(argv) == YES) {
		type = CHAR;
		std::cout << "type is CHAR" << std::endl;
	}
	else {
		std::cout << "type is not CHAR" << std::endl;
	}
}
