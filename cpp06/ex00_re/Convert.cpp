#include "Convert.h"

Convert::Convert() {}

Convert::Convert(std::string arg) {
	d = 0.0;
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

/*
 *  Detect Function
 */
void Convert::charOrFloatOrNone(std::string arg) {
	if (arg.size() == 1) {
		type = CHAR;
		c = arg[0];
	} else if (arg.rfind('f') == arg.size() - 1
				&& isFloat(arg) == YES)
		type = FLOAT;
	else
		type = NONE;
}

void Convert::intOrDouble(std::string arg) {
	if (arg.find('.') != std::string::npos
		|| d > INT_MAX)
		type = DOUBLE;
	else
		type = INT;
}

e_bool Convert::isFloat(std::string arg) {
	// f 제거
	arg.resize(arg.size() - 1);

	std::stringstream ssFloat(arg);
	ssFloat >> f;
	if (ssFloat.fail())
		return NO;
	d = f;
	return YES;
}

void Convert::detectTheType(std::string arg) {
	if (fail == YES) {
	// char가 들어간 경우 (f가 들어있는 float나, char형)
		std::cout << "NONE 0 | CHAR 1 | FLOAT 3" << std::endl;
		charOrFloatOrNone(arg);
	}
	else {
	// int, double형
		std::cout << "INT 2 | DOUBLE 4" << std::endl;
		intOrDouble(arg);
	}
	std::cout << "type : " << type << std::endl;
}

/*
 *  Convert & Print Function
 */

e_bool Convert::isNan() {
	if (isnan(d))
		return YES;
	return NO;
}

e_bool	Convert::isInf() {
	if (isinf(d))
		return YES;
	return NO;
}

e_bool	Convert::hasDecimalPoint() {
	if (d == static_cast<int64_t>(d))
		return NO;
	return YES;
}

void	Convert::convertChar() {
	if (d < 32)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float : " << static_cast<float>(c) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double : " << static_cast<double>(c) << std::endl;
}


void	Convert::convertIntOrFloatOrDouble() {
	if (isNan() == YES)
		std::cout << "char : impossible\nint : impossible\nfloat : nanf" << std::endl;
	else {
		if (d > CHAR_MAX || d < CHAR_MIN)
			std::cout << "char : impossible" << std::endl;
		else if (d < 32)
			std::cout << "char : Non displayable" << std::endl;
		else
			std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;

		if (d > INT_MAX || d < INT_MIN)
			std::cout << "int : impossible" << std::endl;
		else 
			std::cout << "int : " << static_cast<int>(d) << std::endl;

		if (isInf() == YES)
				std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
		else if (d > INT_MAX || d < INT_MIN)
			std::cout << "float : impossible" << std::endl;
		else if (hasDecimalPoint() == YES)
			std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
		else
			std::cout<< "float : " << static_cast<float>(d) << ".0f" << std::endl;
	}

	if (hasDecimalPoint() == YES)
		std::cout << "double : " << d << std::endl;
	else
		std::cout << "double : " << d << ".0" << std::endl;
}

void Convert::convertAndPrint() {
	switch (type)
	{
	case CHAR:
		convertChar();
		break;
	case INT:
	case FLOAT:
	case DOUBLE:
		convertIntOrFloatOrDouble();
		break;
	case NONE:
		// fillImpossible();
		break;
	}
}
