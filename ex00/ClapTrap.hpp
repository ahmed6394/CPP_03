/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:15:40 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/14 11:15:40 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        unsigned int hitPoint;
        unsigned int energyPoint;
        unsigned int attackDamage;
    public:
        ClapTrap(); //default
        ClapTrap(const std::string& name); // Parametrized constructor
        ClapTrap(const ClapTrap& obj); // copy constructor
        ClapTrap& operator=(const ClapTrap& obj); // Copy assignment operator
        ~ClapTrap();

        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //getter
        int getHit(void) const;
        int getEnergy(void) const;
        int getDamage(void) const;
};


