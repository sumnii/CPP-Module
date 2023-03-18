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
//	std::vector<std::string>::iterator itr = _expression.begin();
//	while (itr != _expression.end()) {
//		std::cout << *itr << "/";
//		++itr;
//	}
//	std::cout << std::endl;
}

void RPN::calculate() {
	std::vector<std::string>::iterator itr = _expression.begin();

	while (itr != _expression.end()) {
		if (isNumber(*itr)) {
			try {
				putNumber(*itr);
			} catch (const char *err) {
				throw err;
			}
		} else {
			try {
				putToken(*itr);
			} catch (const char *err) {
				throw err;
			}
		}
		++itr;
	}
}

int RPN::getResult() {
	if (_calculator.size() != 1)
		throw "Error";
	return _calculator.top();
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

void RPN::putToken(std::string token) {
	std::string tokens[4] = { "+", "-", "/", "*" };

	if (_calculator.size() < 2)
		throw "Error";

	int secondNum = _calculator.top();
	_calculator.pop();
	int firstNum = _calculator.top();
	_calculator.pop();

	for (int i = 0; i < 4; ++i) {
		if (tokens[i] == token) {
			switch (i) {
				case 0:
					_calculator.push(firstNum + secondNum);
					return ;
				case 1:
					_calculator.push(firstNum - secondNum);
					return ;
				case 2:
					_calculator.push(firstNum / secondNum);
					return ;
				case 3:;
					_calculator.push(firstNum * secondNum);
					return ;
			}
		}
	}
}
