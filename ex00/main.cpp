/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:15:46 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/14 11:15:46 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// int main()
// {
//     std::cout << "\n===== BASIC TEST =====" << std::endl;
//     ClapTrap bot1("CT-001");
//     bot1.attack("Target Dummy");
//     bot1.takeDamage(3);
//     bot1.beRepaired(2);
    
//     return 0;
// }
int main( void )
{
    std::cout << "\n--- Creating ClapTrap 'CLAPPY' ---" << std::endl;
    ClapTrap clap("CLAPPY");
    std::cout << "\n--- Stats Check ---" << std::endl;
    std::cout << "HP: " << clap.getHit()
              << ", EP: " << clap.getEnergy()
              << ", DMG: " << clap.getDamage() << std::endl;
    std::cout << "\n--- ClapTrap attacks 'TARGET' ---" << std::endl;
    clap.attack("TARGET");
    std::cout << "\n--- ClapTrap takes damage ---" << std::endl;
    clap.takeDamage(5);
    std::cout << "\n--- ClapTrap repairs ---" << std::endl;
    clap.beRepaired(3);
    std::cout << "\n--- End of ClapTrap Test ---" << std::endl;
    return (0);
}