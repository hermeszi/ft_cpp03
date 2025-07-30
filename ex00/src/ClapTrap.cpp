/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/30 16:22:31 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using std::string;
using std::endl;
using std::cout;

ClapTrap::ClapTrap() :
_name("Default"), _hitPoint(10), _energyPoint(10), _attack(0)
{
	cout << "ClapTrap default constructor called" << endl;
}

ClapTrap::ClapTrap(string name) :
_name(name), _hitPoint(10), _energyPoint(10), _attack(0)
{
	cout << "ClapTrap constructor called for " << _name << endl;
}

ClapTrap::ClapTrap	(const ClapTrap& copy)
{
	cout << "ClapTrap Copy constructor called" << endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other)
{
	cout << "ClapTrap Copy assignment operator called" << endl;
	if (this != &other)
	{
		this->_name 		= other.getName();
		this->_hitPoint 	= other.getHitPoint();
		this->_energyPoint 	= other.getEnergyPoint();
		this->_attack 		= other.getAttack();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap destructor called for " << _name << endl;
}

string	ClapTrap::getName() const
{
	return (this->_name);	
}

unsigned int	ClapTrap::getHitPoint() const
{
	return (this->_hitPoint);
}

unsigned int	ClapTrap::getEnergyPoint() const
{
	return (this->_energyPoint);
}

unsigned int	ClapTrap::getAttack() const
{
	return (this->_attack);
}

void ClapTrap::attack(const string& target)
{
	if (_energyPoint < 1 || _hitPoint < 1)
	{
		cout << "ClapTrap " << _name << " cannot attack." << endl;
		return ;
	}
	cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attack << " points of damage!" << endl;
	_energyPoint -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint < 1)
	{
		cout << "ClapTrap " << _name << " cannot take any more damage." << endl;
		return ;
	}
	if (_hitPoint <= amount)
		_hitPoint = 0;
	else
		_hitPoint -= amount;
	cout << "ClapTrap " << _name << " takes " << amount << " damage! \n";
	cout << _name << " hit points is now: " << _hitPoint << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint < 1 || _hitPoint < 1)
	{
		cout << "ClapTrap " << _name << " cannot repair itself." << std::endl;
		return ;
	}
	_hitPoint += amount;
	cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!\n";
	cout << _name << " hit points is now: " << _hitPoint << endl;
	_energyPoint -= 1;
}

