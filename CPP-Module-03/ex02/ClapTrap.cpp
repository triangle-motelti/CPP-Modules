/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motelti <motelti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:57:39 by motelti           #+#    #+#             */
/*   Updated: 2025/10/17 23:54:45 by motelti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed (default)" << std::endl;
}

ClapTrap::ClapTrap(std::string const& nm) : name(nm), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called for " << other.name << std::endl;
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap copy assignment called" << std::endl;
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " has no hit points and can't attack." << std::endl;
		return;
	}
	if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " has no energy and can't attack." << std::endl;
		return;
	}
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " is already down." << std::endl;
		return;
	}
	if (amount >= hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage, hit points now " << hitPoints << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " has no hit points and can't be repaired." << std::endl;
		return;
	}
	if (energyPoints == 0) {
		std::cout << "ClapTrap " << name << " has no energy and can't repair." << std::endl;
		return;
	}
	energyPoints -= 1;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " is repaired by " << amount << " points, hit points now " << hitPoints << "." << std::endl;
}

