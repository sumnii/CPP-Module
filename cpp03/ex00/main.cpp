#include "ClapTrap.h"

int main() {
	ClapTrap one = ClapTrap("ONE");
	ClapTrap two = ClapTrap("TWO");

	one.attack("TWO");
	two.takeDamage(5);
	two.attack("ONE");
	one.takeDamage(10);
	one.attack("TWO");
	one.beRepaired(5);
	one.attack("TWO");
}