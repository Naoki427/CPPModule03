#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this-> hit_points = 100;
	this-> energy_points = 100;
	this-> attack_damage = 30;
	this-> guarding_gate = false;
	std::cout << "FragTrap " << this->name << " has been assembled! Ready for action!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " has been dismantled. Farewell!" << std::endl;
}
void FragTrap::highFivesGuys()
{
	if(this->hit_points == 0)
	{
		std::cout << "FragTrap " << this->name << " has no hit points left!" << std::endl;
	}
	else
	{
		 std::cout << "FragTrap is ready for some high-fives! \nHigh five, my friends! Let's rock this!" << std::endl;
	}
}