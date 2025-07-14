/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:15:50 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/14 11:15:50 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default_Clap"), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << name << "\n";
}

// Parametrized constructor
ClapTrap::ClapTrap(const std::string& name): name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "ClapTrap Constructor called for " << name << "\n";
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& obj)
{
    *this = obj;
    std::cout << "ClapTrap copy constructor called for " << name << "\n";
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    if (this != &obj)
    {
        name = obj.name + "_copy";
        hitPoint = obj.hitPoint;
        energyPoint = obj.energyPoint;
        attackDamage = obj.attackDamage;
    }
    std::cout << "ClapTrap copy assignment operator called for" << name << "\n";
    return *this;
}

//destructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << name << "\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoint <= 0 || energyPoint <= 0)
    {
        std::cout << "ClapTrap " << name << " has no energy or health to attack!\n";
        return;
    }
    energyPoint--;
    std::cout << "ClapTrap " << name << " attacks " << target 
            << ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int actualDamage = (amount > hitPoint) ? hitPoint : amount;
    hitPoint -= actualDamage;
    std::cout << "ClapTrap " << name << " take " << actualDamage << " damage! "
                << hitPoint << " Hit Point remaining.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoint <= 0 || energyPoint <= 0)
    {
        std::cout << "ClapTrap " << name << " can't repair!. No energy or HP left\n";
        return;
    }
    energyPoint--;
    hitPoint += amount;
    std::cout << "ClapTrap " << name << " repairs itself, regainng " << amount
                << " HP! Now at " << hitPoint << " HP.\n";
}


int ClapTrap::getHit(void) const
{
    return hitPoint;
}

int ClapTrap::getEnergy(void) const
{
    return energyPoint;
}

int ClapTrap::getDamage(void) const
{
    return attackDamage;
}
