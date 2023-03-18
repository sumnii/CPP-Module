#ifndef EX01_RPN_HPP
#define EX01_RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <vector>

class RPN {
private:
	std::stack<int> _calculator;
	std::vector<std::string> _expression;

public:
	RPN();
	~RPN();
	RPN(const RPN &ref);
	RPN &operator=(const RPN &ref);

	void setExpression(std::string expression);

	void putNumber(std::string num);
	bool isValidNumber(std::string num);
};


#endif //EX01_RPN_HPP
