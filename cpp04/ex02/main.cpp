#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

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
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << std::endl;
		for (size_t i = 0; i < (sizeof(animals) / sizeof(*animals)); ++i)
			delete animals[i];
	} else if ((std::string) argv[1] == "3") {
		Dog *dog = new Dog();
		Cat *cat = new Cat();

		std::cout << std::endl;
		dog->getBrain().setIdeas(0, "original dog's brain");
		std::cout << "original[0] : " << dog->getBrain().getIdeas(0) << std::endl;
		Dog *deep_copy_dog = new Dog();
		std::cout << "copy dog[0] : " << deep_copy_dog->getBrain().getIdeas(0) << std::endl;
		*deep_copy_dog = *dog;
		std::cout << "copy dog[0] : " << deep_copy_dog->getBrain().getIdeas(0) << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;
		cat->getBrain().setIdeas(3, "original cat's brain");
		std::cout << "original[3] : " << cat->getBrain().getIdeas(3) << std::endl;
		Cat *deep_copy_cat = new Cat();
		*deep_copy_cat = *cat;
		std::cout << "copy cat[3] : " << deep_copy_cat->getBrain().getIdeas(3) << std::endl;
		deep_copy_cat->getBrain().setIdeas(3, "copy cat's brain");
		std::cout << "copy cat[3] : " << deep_copy_cat->getBrain().getIdeas(3) << std::endl;
		std::cout << "original[3] : " << cat->getBrain().getIdeas(3) << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		delete(dog);
		delete(deep_copy_dog);
		delete(cat);
		delete(deep_copy_cat);
	}
//	if ((std::string) argv[1] == "error") {
//		Animal animal;
//
//		std::cout << animal.getType() << std::endl;
//	}
	while (1) {
		system("leaks animal");
		break;
	}
	return 0;
}