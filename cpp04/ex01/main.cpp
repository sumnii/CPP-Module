#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"
#include "unistd.h"

void leaks() {
	std::cout << std::endl << "-------------------[ leaks test ]-------------------" << std::endl;
	system("leaks animal"); }

int main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "TEST > ./animal [1 | 2 | 3]" << std::endl;
		return 0;
	}
	if ((std::string) argv[1] == "1") {
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << std::endl;
		delete j;
		delete i;
	} else if ((std::string) argv[1] == "2") {
		Animal *animals[4];

		for (size_t i = 0; i < (sizeof(animals) / sizeof(*animals)); ++i) {
			std::cout << "[" << i << "]" << std::endl;
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << std::endl;
		for (size_t i = 0; i < (sizeof(animals) / sizeof(*animals)); ++i) {
			std::cout << "[" << i << "]" << std::endl;
			delete animals[i];
		}
	} else if ((std::string) argv[1] == "3") {
		std::cout << "!! NEW ORIGINAL DOG and SET IDEAS !!" << std::endl;
		Dog *dog = new Dog();
		dog->getBrain().setIdeas(0, "original dog's brain");
		std::cout << "original[0] : " << dog->getBrain().getIdeas(0) << std::endl << std::endl;

		std::cout << "!! NEW COPY DOG !!" << std::endl;
		Dog *deep_copy_dog = new Dog();
		std::cout << "copy dog[0] : " << deep_copy_dog->getBrain().getIdeas(0) << std::endl << std::endl;

		std::cout << "!! DEEP_COPY : ORIGINAL -> COPY_DOG !!" << std::endl;
		*deep_copy_dog = *dog;
		std::cout << "copy dog[0] : " << deep_copy_dog->getBrain().getIdeas(0) << std::endl;
		std::cout << std::endl << std::endl;


		std::cout << "!! NEW ORIGINAL CAT and SET IDEAS !!" << std::endl;
		Cat *cat = new Cat();
		cat->getBrain().setIdeas(3, "original cat's brain");
		std::cout << "original[3] : " << cat->getBrain().getIdeas(3) << std::endl << std::endl;
		
		std::cout << "!! NEW COPY CAT and DEEP_COPY !!" << std::endl;
		Cat *deep_copy_cat = new Cat();
		*deep_copy_cat = *cat;
		std::cout << "copy cat[3] : " << deep_copy_cat->getBrain().getIdeas(3) << std::endl << std::endl;

		std::cout << "!! COPY_CAT SET IDEAS !!" << std::endl;
		deep_copy_cat->getBrain().setIdeas(3, "copy cat's brain");
		std::cout << "copy cat[3] : " << deep_copy_cat->getBrain().getIdeas(3) << std::endl;
		std::cout << "original[3] : " << cat->getBrain().getIdeas(3) << std::endl;
		std::cout << std::endl << std::endl;

		delete(dog);
		delete(deep_copy_dog);
		delete(cat);
		delete(deep_copy_cat);
	}
	
	atexit(leaks);
}
