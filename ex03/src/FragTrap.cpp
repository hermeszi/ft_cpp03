/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:31:24 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

using std::string;
using std::endl;
using std::cout;

FragTrap::FragTrap() : ClapTrap()
{
	cout << "FragTrap default constructor called" << endl;
	_hitPoint		= 100;
	_energyPoint	= 100;
	_attack			= 30;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	cout << "FragTrap constructor called for " << _name << endl;
	_hitPoint		= 100;
	_energyPoint	= 100;
	_attack			= 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    cout << "FragTrap copy constructor called" << endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) 
{
    cout << "FragTrap assignment operator called" << endl;
    ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap()
{
    cout << "FragTrap destructor called for " << _name << endl;
}


void FragTrap::attack(const string& target)
{
	if (_energyPoint < 1 || _hitPoint < 1)
	{
		std::cout << "FragTrap " << _name << " cannot attack." << endl;
		return ;
	}
	cout << "FragTrap " << _name << " attacks " << target << " causing " << _attack << " points of damage!" << endl;
	_energyPoint -= 1;
}

void FragTrap::highFivesGuys()
{
	cout << _name << " held up its hand: Gimme five!" << endl;
}
