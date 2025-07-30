/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/30 16:24:26 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

using std::string;
using std::endl;
using std::cout;

ScavTrap::ScavTrap() : ClapTrap()
{
	cout << "ScavTrap default constructor called" << endl;
	_hitPoint		= 100;
	_energyPoint	= 50;
	_attack			= 20;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	cout << "ScavTrap constructor called for " << _name << endl;
	_hitPoint		= 100;
	_energyPoint	= 50;
	_attack			= 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    cout << "ScavTrap copy constructor called" << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    cout << "ScavTrap assignment operator called" << endl;
    ClapTrap::operator=(other);
    return *this;
}

ScavTrap::~ScavTrap()
{
    cout << "ScavTrap destructor called for " << _name << endl;
}


void ScavTrap::attack(const string& target)
{
	if (_energyPoint < 1 || _hitPoint < 1)
	{
		cout << "ScavTrap " << _name << " cannot attack." << endl;
		return ;
	}
	cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attack << " points of damage!" << endl;
	_energyPoint -= 1;
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap " << _name << " is in gate keeper mode." << endl;
}
