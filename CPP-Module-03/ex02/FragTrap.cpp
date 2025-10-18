#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("default_frag")
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructed (default)" << std::endl;
}

FragTrap::FragTrap(std::string const& nm) : ClapTrap(nm)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called for " << other.name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap copy assignment called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hitPoints == 0)
	{
		std::cout << "FragTrap " << name << " has no hit points and can't attack." << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "FragTrap " << name << " has no energy and can't attack." << std::endl;
		return;
	}
	energyPoints -= 1;
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;

}

