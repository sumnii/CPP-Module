#ifndef EX02_FRAGTRAP_H
#define EX02_FRAGTRAP_H

#include "ScavTrap.h"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &ref);
	FragTrap &operator=(const FragTrap &ref);

	void highFivesGuys(void);
};

#endif //EX02_FRAGTRAP_H
