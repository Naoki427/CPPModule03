#include "ScavTrap.hpp"

int main()
{
	//default constructor
	ScavTrap pikachu("Pikachu");
	ScavTrap mewtwo("Mewtwo");
	//copy constructor
	ScavTrap metamon(pikachu);

	std::cout << std::endl;

	//attack
	metamon.attack("Mewtwo");
	//takeDmage
	mewtwo.takeDamage(20);
	//beRapaired
	mewtwo.beRepaired(10);

	std::cout << std::endl;
	//guardGate
	mewtwo.guardGate();

	std::cout << std::endl;
	return 0;
}