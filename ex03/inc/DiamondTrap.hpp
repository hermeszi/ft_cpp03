/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:33:55 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
using std::string;

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name; 
public:
	DiamondTrap();
	DiamondTrap(string name);
	~DiamondTrap();
	DiamondTrap	(const DiamondTrap& copy);
	DiamondTrap& operator= (const DiamondTrap& other);

    const string&   getName() const;
	void            attack(const string& target);
    void            whoAmI();
};

#endif
