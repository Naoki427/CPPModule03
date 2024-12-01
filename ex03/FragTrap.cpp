#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this-> hit_points = 100;
	this-> energy_points = 100;
	this-> attack_damage = 30;
	std::cout << "FragTrap " << this->name << " has been assembled! Ready for action!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " has been dismantled. Farewell!" << std::endl;
}
FragTrap::FragTrap(const FragTrap &origin) : ClapTrap(origin) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap &origin){
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if(this == &origin)
		return *this;
	this->name = origin.name;
	this->hit_points = origin.hit_points;
	this->energy_points = origin.energy_points;
	this->attack_damage = origin.attack_damage;
	return *this;
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