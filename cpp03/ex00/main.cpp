#include "ClapTrap.h"

int main() {
	ClapTrap one = ClapTrap("ONE");
	ClapTrap two = ClapTrap("TWO");
	ClapTrap three = ClapTrap("THREE");

	one.attack("TWO");
	two.takeDamage(5);
	two.attack("ONE");
	one.takeDamage(10);
	one.attack("TWO");
	one.beRepaired(5);
	two.beRepaired(5);
	two.attack("THREE");
	three.takeDamage(10);
}