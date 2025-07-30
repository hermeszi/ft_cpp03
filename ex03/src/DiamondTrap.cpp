/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/30 16:19:06 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

using std::string;
using std::endl;
using std::cout;

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"),  ScavTrap(), FragTrap(), _name("Default")
{
	cout << "DiamondTrap default constructor called" << endl;
	_hitPoint		= 100;
	_energyPoint	= 50;
	_attack			= 30;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	cout << "DiamondTrap constructor called for " << _name << endl;
	_hitPoint		= 100;
	_energyPoint	= 50;
	_attack			= 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(), FragTrap()
{
    cout << "DiamondTrap copy constructor called" << endl;
    _name = other.DiamondTrap::getName();
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) 
{
    cout << "DiamondTrap assignment operator called" << endl;
    ClapTrap::operator=(other);
    this->_name = other.getName();
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    cout << "DiamondTrap destructor called for " << _name << endl;
}

void DiamondTrap::attack(const string& target)
{
	if (_energyPoint < 1 || _hitPoint < 1)
	{
		cout << "DiamondTrap " << _name << " cannot attack." << endl;
		return ;
	}
	cout << "DiamondTrap " << _name << " attacks " << target << " causing " << _attack << " points of damage!" << endl;
	_energyPoint -= 1;
}

const string& DiamondTrap::getName() const
{
    return (this->_name);
}

void DiamondTrap::whoAmI()
{
    cout << "I am DiamondTrap: " << _name << endl;
    cout << "But actually inside, I am also ClapTrap: " << ClapTrap::_name << endl;
}
