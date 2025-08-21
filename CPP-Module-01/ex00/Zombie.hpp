/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:23:59 by motelti           #+#    #+#             */
/*   Updated: 2025/08/21 12:06:48 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


class Zombie {
	private :
	std::string name;
	
	public :
	void announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);