#ifndef EX01_RPN_HPP
#define EX01_RPN_HPP

#include <iostream>
#include <stack>

class RPN {
private:
	std::stack<int> calculator;

public:
	RPN();
	~RPN();
	RPN(const RPN &ref);
	RPN &operator=(const RPN &ref);
};


#endif //EX01_RPN_HPP
