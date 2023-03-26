#ifndef EX01_RPN_HPP
#define EX01_RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <queue>
// #include <vector>

class RPN {
private:
	std::stack<int> _calculator;
	std::queue<std::string> _expression;

	bool isNumber(std::string num);
	void putNumber(std::string num);
	void putToken(std::string token);

public:
	RPN();
	~RPN();
	RPN(const RPN &ref);
	RPN &operator=(const RPN &ref);

	void setExpression(std::string expression);
	void calculate();
	int getResult();
};

#endif //EX01_RPN_HPP
