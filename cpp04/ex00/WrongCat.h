#ifndef EX00_WRONGCAT_H
#define EX00_WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &ref);
	WrongCat &operator=(const WrongCat &ref);

	void makeSound();
};


#endif //EX00_WRONGCAT_H
