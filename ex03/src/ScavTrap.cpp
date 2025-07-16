/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:37:42 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/16 14:19:37 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

//default constructor
ScavTrap::ScavTrap() : ClapTrap("Default_Scav")
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "Scavtrap default constructor called for " << name << "\n";
}

// parameterize constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << name << "\n";
}

// copy constructor
ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap copy constructor called for " << name << "\n";
}

// assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    ClapTrap::operator=(obj);
    std::cout << "ScavTrap copy assignment operator called for " << name << "\n";
    return *this;
}

// destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called for " << name << "\n";
}

// oveerride claptrap's attack
void ScavTrap::attack(const std::string& target)
{
    if (hitPoint <= 0 || energyPoint <= 0)
    {
        std::cout << "ScavTrap " << name << " cannot attack. No health or energy!\n";
        return;
    }
    energyPoint--;
    std::cout << "ScavTrap " << name << " attacks" << target << ", causing "
                << attackDamage << " damage!\n";
} 

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " has entered the Gate keeper mode.\n";
}
