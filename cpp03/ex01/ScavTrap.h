#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &ref);
	ScavTrap &operator=(const ScavTrap &ref);

	void guardGate();
};


#endif //EX01_SCAVTRAP_H
