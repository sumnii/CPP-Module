#include "Convert.h"

Convert::Convert() {}

Convert::Convert(std::string arg) {
	std::stringstream ssDouble(arg);
	ssDouble >> d;
	if (ssDouble.fail())
		fail = YES;
	else
		fail = NO;
}

Convert::Convert(Convert &ref)
		: type(ref.type), fail(ref.fail), c(ref.c), i(ref.i), f(ref.f), d(ref.d) {}

Convert &Convert::operator=(const Convert &ref) {
	type = ref.type;
	fail = ref.fail;
	c = ref.c;
	i = ref.i;
	f = ref.f;
	d = ref.d;
	return (*this);
}

Convert::~Convert() {}

e_bool Convert::isChar(std::string arg) {
	if (arg.size() == 1) {
		type = CHAR;
		c = arg[0];
		return (YES);
	} else if (arg.rfind('f') == arg.size() - 1
				&& isFloat(arg) == YES)
		type = FLOAT;
	else
		type = NONE;
	return (NO);
}

e_bool Convert::isFloat(std::string arg) {
	// f 제거
	arg.resize(arg.size() - 1);

	std::stringstream ssFloat(arg);
	ssFloat >> f;
	if (ssFloat.fail())
		return NO;
	return YES;
}

void Convert::detectTheType(std::string arg) {
	if (fail == YES) {
	// char가 들어간 경우 (f가 들어있는 float나, char형)
		std::cout << "NONE 0 | CHAR 1 | FLOAT 3" << std::endl;
		isChar(arg);
	}
	else
	// int, double형
		std::cout << "INT 2 | DOUBLE 4" << std::endl;
	std::cout << "type : " << type << std::endl;
}

void Convert::printConvertResult() {
	std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << f << std::endl;
	std::cout << "double : " << d << std::endl;
}
