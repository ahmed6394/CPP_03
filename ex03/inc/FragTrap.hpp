/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:48:39 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/16 14:31:24 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(); // Default constructor
		FragTrap(const std::string& name); // perameterize constructor
		FragTrap(const FragTrap& obj); // copy constructor
		FragTrap& operator=(const FragTrap& obj); // assignment operator
		~FragTrap(); // Default destructor
		
		void highFivesGuys(void);
};