#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap pikachu("Pikachu");
	ScavTrap mewtwo("Mewtwo");

	pikachu.attack("Mewtwo");
	mewtwo.takeDamage(30);
	mewtwo.beRepaired(10);
	mewtwo.guardGate();
	pikachu.highFivesGuys();
	return 0;
}