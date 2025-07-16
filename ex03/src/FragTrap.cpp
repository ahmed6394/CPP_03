/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:48:25 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/16 14:33:16 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap("Default_Frag")
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap default constructor called for " << name << "\n";
} 

// perameterize constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called for " << name << "\n";
}

// copy constructor
FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called for " << name << "\n";
} 

// assignment operator
FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoint = obj.hitPoint;
		this->energyPoint = obj.energyPoint;
		this->attackDamage = obj.attackDamage;
	}
	std::cout << "FragTrap copy assignment operator called for " << name << "\n";
	return *this;
} 

// Default destructor
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << name << "\n";
} 

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " become the HighFivesGuye.\n";
}