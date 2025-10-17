/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:02:26 by motelti           #+#    #+#             */
/*   Updated: 2025/10/17 19:12:31 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap r1("CL4P-TP");
	r1.attack("bandit");
	r1.takeDamage(3);
	r1.beRepaired(5);

	ClapTrap r2("FR4G-TP");
	r2.takeDamage(11);
	r2.attack("skag");
	r2.beRepaired(2);

	ClapTrap r3 = r1;
	r3.attack("bad guy");

	for (int i = 0; i < 11; ++i)
		r1.attack("dummy");

	return 0;
}

