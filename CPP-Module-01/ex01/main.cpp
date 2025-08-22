/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:59:07 by motelti           #+#    #+#             */
/*   Updated: 2025/08/22 11:38:51 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde;
	int		N;
	
	N = 5;
	horde = zombieHorde(N, "HordeMember");
	if (!horde) {
		std::cout << "No zombies created!" << std::endl;
		return 1;
	}
	for (int i = 0; i < N; ++i)
		horde[i].announce();
	delete[] horde;

	return 0;
}
