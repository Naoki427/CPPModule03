#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this-> hit_points = 100;
	this-> energy_points = 50;
	this-> attack_damage = 20;
	this-> guarding_gate = false;
	std::cout << "ScavTrap " << this->name << " has been assembled! Ready for action!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " has been dismantled. Farewell!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &origin) : ClapTrap(origin) {
	this->guarding_gate = origin.guarding_gate;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &origin){
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if(this == &origin)
		return *this;
	this->name = origin.name;
	this->hit_points = origin.hit_points;
	this->energy_points = origin.energy_points;
	this->attack_damage = origin.attack_damage;
	return *this;
}

void ScavTrap::attack(const std::string& target) 
{
	if(this->hit_points == 0)
	{
		std::cout << "ScavTrap " << this->name << " has no hit points left and cannot attack!" << std::endl;
	}
	else if (this->energy_points == 0)
	{
		std::cout << "ScavTrap " << name << " tries to attack, but it doesn't have enough energy points to do so!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
}

void ScavTrap::guardGate()
{
	if(this->hit_points == 0)
	{
		std::cout << "ScavTrap " << this->name << " has no hit points left!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " is now guarding the gates! Intruders beware... or bring cookies." << std::endl;
		this->guarding_gate = true;
	}
}