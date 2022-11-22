#ifndef EX00_WRONGANIMAL_H
#define EX00_WRONGANIMAL_H

#include "iostream"

class WrongAnimal {
protected:
	std::string _type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &ref);
	WrongAnimal &operator=(const WrongAnimal &ref);

	const std::string getType() const;
	void makeSound() const;
};


#endif //EX00_WRONGANIMAL_H
