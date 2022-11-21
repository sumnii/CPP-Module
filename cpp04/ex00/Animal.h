#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H


class Animal {
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &ref);
	Animal &operator=(const Animal &ref);

	const std::string getType() const;
	virtual void makeSound();
};


#endif //EX00_ANIMAL_H
