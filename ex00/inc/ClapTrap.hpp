/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:33:55 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
using std::string;

class ClapTrap
{
private:
	string			_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attack;

public:
	ClapTrap();
	ClapTrap(string name);
	~ClapTrap();
	ClapTrap	(const ClapTrap& copy);
	ClapTrap&	operator= (const ClapTrap& other);

	string	getName() const;
	unsigned int	getHitPoint() const;
	unsigned int	getEnergyPoint() const;
	unsigned int	getAttack() const;

	void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
