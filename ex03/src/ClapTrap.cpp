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

ClapTrap::ClapTrap(): name("default"), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "Default constructor called\n";
}

// Parametrized constructor
ClapTrap::ClapTrap(const std::string& name): name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructed!\n";
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap& obj)
{
    *this = obj;
    std::cout << "Copy constructor called for " << name << "\n";
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
    std::cout << "Copy assignment operator called\n";
    return *this;
}

//destructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed!\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoint <= 0 || energyPoint <= 0)
    {
        std::cout << name << " can't attack! ";
        if (hitPoint <= 0)
            std::cout <<"No Hit Point left!\n";
        else
            std::cout << "No energy left!\n";
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
    std::cout << name << " take " << actualDamage << " damage! "
                << hitPoint << " Hit Point remaining.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoint <= 0 || energyPoint <= 0)
    {
        std::cout << name << " can't repair! ";
        if(hitPoint <= 0)
            std::cout << "No HP left!\n";
        else
            std::cout << "No energy left!\n";
        return;
    }
    energyPoint--;
    hitPoint += amount;
    std::cout << name << " repairs itself, regainng " << amount
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
