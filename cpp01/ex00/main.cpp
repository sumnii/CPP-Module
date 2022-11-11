#include "Zombie.h"

int main(void) {
	Zombie *foo;

	foo = newZombie("Foo");
	foo->Announce();
}