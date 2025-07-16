/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:06:11 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/15 13:02:24 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    std::cout << "\n--- Creating ScavTrap 'SCAVVY' ---" << std::endl;
    ScavTrap scav("Scavee");
    std::cout << "\n--- Stats Check ---" << std::endl;
    std::cout << "HP: " << scav.getHit()
              << ", EP: " << scav.getEnergy()
              << ", DMG: " << scav.getDamage() << std::endl;
    std::cout << "\n--- ScavTrap attacks 'ENEMY' ---" << std::endl;
    scav.attack("ENEMY");
    std::cout << "\n--- ScavTrap takes damage ---" << std::endl;
    scav.takeDamage(15);
    std::cout << "\n--- ScavTrap repairs ---" << std::endl;
    scav.beRepaired(10);
    std::cout << "\n--- ScavTrap activates Gate Keeper mode ---" << std::endl;
    scav.guardGate();
    std::cout << "\n--- End of ScavTrap Test ---" << std::endl;
    return (0);
}