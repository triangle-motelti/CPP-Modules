/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:58:15 by motelti           #+#    #+#             */
/*   Updated: 2025/10/17 23:57:05 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "Creating a ClapTrap:" << std::endl;
	ClapTrap ct("CL4P-TP");
	ct.attack("bandit");
	ct.takeDamage(3);
	ct.beRepaired(5);

	std::cout << std::endl << "Creating a ScavTrap in a block to show construction/destruction order:" << std::endl;
	{
		ScavTrap st("SC4V-TP");
		st.attack("raider");
		st.guardGate();

		std::cout << std::endl << "Copying ScavTrap to show copy constructor and chaining:" << std::endl;
		ScavTrap st2 = st;
		st2.attack("raider clone");

		std::cout << std::endl << "Draining energy of st:" << std::endl;
		for (int i = 0; i < 51; ++i)
			st.attack("training dummy");
	}
	std::cout << std::endl << "Back outside block (ScavTrap destroyed), program ending." << std::endl;

	return 0;
}

