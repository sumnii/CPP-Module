#include "Convert.h"

Convert::Convert() : type(NONE), c(0), i(0), f(0.0), d(0.0), is_point_zero(NO) {}

Convert::Convert(Convert &ref)
		: type(ref.type), c(ref.c), i(ref.i), f(ref.f), d(ref.d), is_point_zero(ref.is_point_zero) {}

Convert &Convert::operator=(const Convert &ref) {
	type = ref.type;
	c = ref.c;
	i = ref.i;
	f = ref.f;
	d = ref.d;
	is_point_zero = ref.is_point_zero;
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

void Convert::stringToChar(std::string &arg) {
	type = CHAR;

	c = arg[0];
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
}

void Convert::stringToInt(std::string &arg) {
	type = INT;
	int tmp_i = 0;

	std::stringstream ssInt(arg);
	ssInt >> tmp_i;

	c = static_cast<char>(tmp_i);
	i = tmp_i;
	f = static_cast<float>(tmp_i);
	d = static_cast<double>(tmp_i);
}

void Convert::stringToFloat(std::string &arg) {
	type = FLOAT;
	float tmp_f = 0.0;

	arg.resize(arg.length());
	std::stringstream ssFloat(arg);
	ssFloat >> tmp_f;

	if (arg.rfind("0") == arg.length() - 1
		&& arg.rfind(".") == arg.length() - 2)
		is_point_zero = YES;
	c = static_cast<char>(tmp_f);
	i = static_cast<int>(tmp_f);
	f = tmp_f;
	d = static_cast<double>(tmp_f);
}

void Convert::stringToDouble(std::string &arg) {
	type = DOUBLE;
	double tmp_d = 0.0;

	std::stringstream ssDouble(arg);
	ssDouble >> tmp_d;

	if (arg.rfind("0") == arg.length() - 1
		&& arg.rfind(".") == arg.length() - 2)
		is_point_zero = YES;
	c = static_cast<char>(tmp_d);
	i = static_cast<int>(tmp_d);
	f = static_cast<float>(tmp_d);
	d = tmp_d;
}

void Convert::detectTheType(std::string arg) {
	switch (isCharOrFloat(arg)) {
		case YES:
			if (isHaveDot(arg) == NO)
				stringToChar(arg);
			else
				stringToFloat(arg);
			break;
		case NO:
			if (isHaveDot(arg) == NO)
				stringToInt(arg);
			else
				stringToDouble(arg);
	}
}

void Convert::printConvertResult() {
	std::cout << "type : " << type << std::endl;
	std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << f;
	if (type == CHAR || type == INT || is_point_zero == YES) std::cout << ".0f" << std::endl;
	else std::cout << "f" << std::endl;
	std::cout << "double : " << d;
	if (type == CHAR || type == INT || is_point_zero == YES) std::cout << ".0";
	std::cout << std::endl;
}
