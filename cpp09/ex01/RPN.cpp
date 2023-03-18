#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &ref) {
	if (this != &ref)
		*this = ref;
}

RPN &RPN::operator=(const RPN &ref) {
	if (this != &ref)
		*this = ref;
	return *this;
}
