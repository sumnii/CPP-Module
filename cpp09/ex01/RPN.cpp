#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &ref) {
	if (this != &ref) {
		_calculator = ref._calculator;
		_expression = ref._expression;
	}
}

RPN &RPN::operator=(const RPN &ref) {
	if (this != &ref) {
		_calculator = ref._calculator;
		_expression = ref._expression;
	}
	return *this;
}


void RPN::setExpression(std::string expression) {
	std::string splitTarget = expression;
	user_size_t whiteSpace = splitTarget.find(' ');

	while (whiteSpace != std::string::npos) {
		_expression.push_back(splitTarget.substr(0, whiteSpace));
		splitTarget = splitTarget.substr(whiteSpace + 1);
		whiteSpace = splitTarget.find(' ');
	}
	if (!splitTarget.empty())
		_expression.push_back(splitTarget);

	// for print expression vector
	std::vector<std::string>::iterator itr = _expression.begin();
	while (itr != _expression.end()) {
		std::cout << *itr << "/";
		++itr;
	}
	std::cout << std::endl;
}

void RPN::calculate() {
	std::vector<std::string>::iterator itr = _expression.begin();

	while (itr != _expression.end()) {
		if (isNumber(*itr)) {
			try {
				putNumber(*itr);
			} catch (const char *errMsg) {
				std::cerr << errMsg << std::endl;
			}
		} else {
			// token 계산
		}
		++itr;
	}
}

bool RPN::isNumber(std::string num) {
	if (num == "+" || num == "-" || num == "/" || num == "*")
		return false;
	return true;
}



void RPN::putNumber(std::string sNum) {
	int num;

	try {
		num = stoi(sNum);
		if (num >= 10)
			throw "Error";
		_calculator.push(num);
	} catch(std::exception &e) {
		throw "Error";
	}
}
