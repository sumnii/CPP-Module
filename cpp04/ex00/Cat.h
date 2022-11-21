#ifndef EX00_CAT_H
#define EX00_CAT_H


#include "Animal.h"

class Cat : public Animal {
public:
	Cat();
	~Cat();
	Cat(const Cat &ref);
	Cat &operator=(const Cat &ref);

	void makeSound();
};


#endif //EX00_CAT_H
