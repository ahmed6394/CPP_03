/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                             ,                        +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:14:38 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/16 14:42:09 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(); // Default constructor
		DiamondTrap(const std::string& name); // perameterize constructor
		DiamondTrap(const DiamondTrap& obj); // copy constructor
		DiamondTrap& operator=(const DiamondTrap& obj); // assignment operator
		~DiamondTrap(); // Default destructor
		
		void whoAmI();
		void attack(const std::string& target);
};