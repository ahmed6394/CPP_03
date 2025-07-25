/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:37:38 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/14 13:37:38 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(); //default constructor
        ScavTrap(const std::string& name); // parameterize constructor
        ScavTrap(const ScavTrap& obj); // copy constructor
        ScavTrap& operator=(const ScavTrap& obj); // assignment operator 
        ~ScavTrap(); // destructor

        void attack(const std::string& target); // oveerride claptrap's attack
        void guardGate();
};
