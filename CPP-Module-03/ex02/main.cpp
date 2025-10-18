#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "Create a FragTrap:" << std::endl;
	FragTrap f("FR4G-TP");
	f.attack("bandit");
	f.highFivesGuys();

	std::cout << std::endl << "Show copy and assignment:" << std::endl;
	FragTrap f2 = f;
	f2.attack("raider");

	FragTrap f3("Temp");
	f3 = f;
	f3.highFivesGuys();

	return 0;
}

