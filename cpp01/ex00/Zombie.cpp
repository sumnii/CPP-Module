#include "Zombie.h"

void Zombie::Announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::setName(const std::string name){
	this->name = name;
}
