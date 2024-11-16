#include "ScavTrap.hpp"

int main()
{
	ScavTrap pikachu("Pikachu");
	ScavTrap mewtwo("Mewtwo");

	pikachu.attack("Mewtwo");
	mewtwo.takeDamage(20);
	mewtwo.beRepaired(10);
	mewtwo.guardGate();
	return 0;
}