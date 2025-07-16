/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:18:18 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/16 15:37:36 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap("Dia_clap_name"), ScavTrap("Dia"), FragTrap("Dia")
{
	name = "Dia";
	this->hitPoint = FragTrap::getHit();
	ScavTrap tempScavTrap;
	this->energyPoint = tempScavTrap.getEnergy();
	this->attackDamage = FragTrap::getDamage();
	std::cout << "DiamondTrap Default constructor called " << name << "\n";
}

// perameterize constructor
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->hitPoint = FragTrap::getHit();
	ScavTrap tempScavTrap;
	this->energyPoint = tempScavTrap.getEnergy();
	// this->energyPoint = ScavTrap::getEnergy();
	this->attackDamage = FragTrap::getDamage();
	std::cout << "DiamondTrap constructor called " << name << "\n";
}

// copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	this->name = obj.name;
	std::cout << "DiamondTrap copy constructor called for " << name << "\n";
}

// assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
		ScavTrap::operator=(obj);
		FragTrap::operator=(obj);
		this->name = obj.name;
		// this->hitPoint = obj.hitPoint;
		// this->energyPoint = obj.energyPoint;
		// this->attackDamage = obj.attackDamage;
	}
	std::cout << "DiamondTrap copy assignment operator called for " << name << "\n";
	return *this;
}

// Default destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << name << "\n";
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << name << " inherited from " << ClapTrap::name << ".\n";
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}