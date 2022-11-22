#ifndef EX00_DOG_H
#define EX00_DOG_H


#include "Animal.h"

class Dog : public Animal {
private:
	Brain *brain;

public:
	Dog();
	~Dog();
	Dog(const Dog &ref);
	Dog &operator=(const Dog &ref);

	void makeSound() const;
	Brain &getBrain();
};


#endif //EX00_DOG_H
