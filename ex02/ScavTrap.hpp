#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
private:
	bool guarding_gate;
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);
};


#endif