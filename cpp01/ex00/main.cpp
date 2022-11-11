#include "Zombie.h"

int main(void) {
	Zombie *foo;
	Zombie *halo;

	foo = newZombie("Foo");
	halo = newZombie("HALO");
	foo->Announce();
	halo->Announce();
	randomChump("Random");
}