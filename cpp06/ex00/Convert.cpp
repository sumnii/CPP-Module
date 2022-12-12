#include "Convert.h"

Convert::Convert() : type(NONE), c(""), i(""), f(""), d("") {}

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

e_bool Convert::isSpecialValue(const std::string &arg) {
	if (arg == "nan" || arg == "+inf" || arg == "-inf"
		|| arg == "nanf" || arg == "+inff" || arg == "-inff") {
		type = SPECIAL;
		return (YES);
	}
	return (NO);
}

e_bool Convert::isCharOrFloat(const std::string &arg) {
	double d = 0.0;

	std::stringstream ssDouble(arg);
	ssDouble >> d;

	if (ssDouble.fail())
		return (YES);
	return (NO);
}

e_bool Convert::isHaveDot(std::string &arg) {
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

void Convert::checkNonprintable(char c) {
	if (c < 32)
		this->c = "Non displayable";
}

void Convert::stringToChar(std::string &arg) {
	type = CHAR;
	char tmp_c = arg[0];

	c = tmp_c;

	std::stringstream ssInt;
	ssInt << static_cast<int>(tmp_c);
	i = ssInt.str();

	std::stringstream ssFloat;
	ssFloat << static_cast<float>(tmp_c);
	f = ssFloat.str() + ".0f";

	std::stringstream ssDouble;
	ssDouble << static_cast<double>(tmp_c);
	d = ssDouble.str() + ".0";

	std::cout << c << " | " << i << " | " << f << " | " << d << std::endl;
}

void Convert::stringToInt(std::string &arg) {
	type = INT;
	int tmp_i = 0;
	std::stringstream ssInt(arg);
	ssInt >> tmp_i;

	c = static_cast<char>(tmp_i);
	checkNonprintable(static_cast<char>(tmp_i));

	ssInt << tmp_i;
	i = ssInt.str();

	std::stringstream ssFloat;
	ssFloat << static_cast<float>(tmp_i);
	f = ssFloat.str() + ".0f";

	std::stringstream ssDouble;
	ssDouble << static_cast<double>(tmp_i);
	d = ssDouble.str() + ".0";

	std::cout << c << " | " << i << " | " << f << " | " << d << std::endl;
}

void Convert::stringToFloat(std::string &arg) {
	type = FLOAT;
	float tmp_f = 0.0;

	arg.resize(arg.length());
	std::stringstream ssFloat(arg);
	ssFloat >> tmp_f;

	c = static_cast<char>(tmp_f);
	checkNonprintable(static_cast<char>(tmp_f));

	std::stringstream ssInt;
	ssInt << tmp_f;
	i = ssInt.str();

	ssFloat << tmp_f;
	f = ssFloat.str() + "f";

	d = ssFloat.str();

	std::cout << c << " | " << i << " | " << f << " | " << d << std::endl;
}

void Convert::stringToDouble(std::string &arg) {
	type = DOUBLE;
	double tmp_d = 0.0;

	std::stringstream ssDouble(arg);
	ssDouble >> tmp_d;

	c = static_cast<char>(tmp_d);
	checkNonprintable(static_cast<char>(tmp_d));

	std::stringstream ssInt;
	ssInt << tmp_d;
	i = ssInt.str();

	std::stringstream ssFloat;
	ssFloat << tmp_d;
	f = ssFloat.str();
	if (arg.rfind("0") == arg.length() - 1
		&& arg.rfind(".") == arg.length() - 2)
		f += ".0f";

	ssDouble << static_cast<double>(tmp_d);
	d = ssDouble.str();

	std::cout << c << " | " << i << " | " << f << " | " << d << std::endl;
}

void Convert::detectTheType(std::string arg) {
	if (isSpecialValue(arg) == YES)
		return ;
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
	std::cout << "char : ";
	if (c.length() == 1)
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << f << std::endl;
	std::cout << "double : " << d << std::endl;
}
