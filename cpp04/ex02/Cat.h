#ifndef EX00_CAT_H
#define EX00_CAT_H


#include "A_Animal.h"

class Cat : public A_Animal {
private:
	Brain *brain;

public:
	Cat();
	~Cat();
	Cat(const Cat &ref);
	Cat &operator=(const Cat &ref);

	void makeSound() const;
	Brain &getBrain();
};


#endif //EX00_CAT_H
