#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &ref) {
	if (this != &ref)
		_calculator = ref._calculator;
}

RPN &RPN::operator=(const RPN &ref) {
	if (this != &ref)
		_calculator = ref._calculator;
	return *this;
}
