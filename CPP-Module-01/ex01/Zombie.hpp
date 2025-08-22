/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:58:30 by motelti           #+#    #+#             */
/*   Updated: 2025/08/22 11:38:55 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void setName(std::string name);
	void announce(void);
};

Zombie* zombieHorde(int N, std::string name);