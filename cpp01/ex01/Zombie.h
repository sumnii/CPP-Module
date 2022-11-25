#ifndef CPP_MODULE_ZOMBIE_H
#define CPP_MODULE_ZOMBIE_H

#include "iostream"

class Zombie {
private:
	std::string name;

public:
	void	Announce(void);
	void	setName(const std::string name);
	~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif //CPP_MODULE_ZOMBIE_H
