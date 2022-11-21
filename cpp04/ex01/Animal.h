#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H


#include "iostream"
#include "Brain.h"

class Animal {
protected:
	std::string _type;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &ref);
	Animal &operator=(const Animal &ref);

	const std::string getType() const;
	virtual void makeSound() const;
};


#endif //EX00_ANIMAL_H
