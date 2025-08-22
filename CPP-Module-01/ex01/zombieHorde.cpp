/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:29:17 by motelti           #+#    #+#             */
/*   Updated: 2025/08/22 11:35:13 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde;
    
	if (N <= 0)
		return NULL;
	horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	return horde;
}
