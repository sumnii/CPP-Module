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


void RPN::putNumber(std::string num) {
	if (isValidNumber(num))
		_calculator.push(stoi(num));
	throw "Error";
}

bool RPN::isValidNumber(std::string num) {
	if (num.size() != 1)
		return false;
	return true;
}
