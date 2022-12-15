#ifndef EX02_MUTANTSTACK_H
#define EX02_MUTANTSTACK_H

#include <list>
#include <stack>
#include "iostream"

template<typename T>
class MutantStack : public std::stack<T> {
private:

public:
	static typename std::stack<T>::container_type::iterator iterator;

};


#endif //EX02_MUTANTSTACK_H
