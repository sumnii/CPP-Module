#ifndef EX02_MUTANTSTACK_H
#define EX02_MUTANTSTACK_H

#include <list>
#include <stack>
#include "iostream"
#include "algorithm"

template<typename T>
class MutantStack : public std::stack<T> {
private:
	MutantStack &operator=(const MutantStack &ref) {
		if (this != &ref)
			*this = ref;
		return (*this);
	};

public:
	MutantStack() {};
	MutantStack(const MutantStack &ref) { *this = ref; };
	~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() {
		return (std::stack<T>::c.begin());
	};
	iterator end() {
		return (std::stack<T>::c.end());
	};
};


#endif //EX02_MUTANTSTACK_H
