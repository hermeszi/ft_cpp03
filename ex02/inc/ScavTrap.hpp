/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:33:55 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
using std::string;

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(string name);
	~ScavTrap();
	ScavTrap	(const ScavTrap& copy);
	ScavTrap&	operator= (const ScavTrap& other);

	void attack(const string& target);
    void guardGate();
};

#endif
