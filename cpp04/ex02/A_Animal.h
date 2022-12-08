#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H


#include "iostream"
#include "Brain.h"

class A_Animal {
protected:
	std::string _type;

public:
	A_Animal();
	virtual ~A_Animal();
	A_Animal(const A_Animal &ref);
	A_Animal &operator=(const A_Animal &ref);

	const std::string &getType() const;
	virtual void makeSound() const = 0;
};


#endif //EX00_ANIMAL_H
