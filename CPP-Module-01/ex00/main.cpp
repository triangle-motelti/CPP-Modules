/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:22:27 by motelti           #+#    #+#             */
/*   Updated: 2025/08/21 18:18:49 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *heapZombie;
	
	heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	
	delete heapZombie;

	randomChump("StackZombie");
	return 0;
}
