#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name),hit_points(10),energy_points(10),attack_damage(0)
{
	std::cout << "ClapTrap " << this->name << " has been assembled! Ready for action!" << std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " has been dismantled. Farewell!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no hit points left and cannot attack!" << std::endl;
	}
	else if (this->energy_points == 0)
	{
		std::cout << "ClapTrap " << name << " tries to attack, but it doesn't have enough energy points to do so!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > amount)
	{
		this->hit_points -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damage but is still standing with " << this->hit_points << " hit points left!" << std::endl;
	}
	else
	{
		this->hit_points = 0;
		std::cout << "ClapTrap " << this->name << " has been destroyed! No hit points remaining..." << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " is critically damaged and can't repair itself anymore!" << std::endl;
	}
	else if (this->energy_points == 0)
	{
		std::cout << "ClapTrap " << name << " attempts to repair itself, but it lacks the energy to proceed!" << std::endl;;
	}
	else
	{
		unsigned int maxRecoverable = INT_MAX - this->hit_points;
		if (amount > maxRecoverable) 
		{
			std::cout << "ClapTrap " << this->name << " is trying to recover " << amount 
					<< " hit points, but it can only recover " << maxRecoverable 
					<< " hit points to reach the maximum!" << std::endl;
			this->hit_points = INT_MAX;
		} 
		else 
		{
			this->hit_points += amount;
			std::cout << "ClapTrap " << this-> name << " recovers " << amount 
					<< " hit points, total hit points: " << this->hit_points << "." << std::endl;
   		}
	}
}
