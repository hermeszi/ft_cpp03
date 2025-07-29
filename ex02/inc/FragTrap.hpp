/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:33:55 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
using std::string;

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(string name);
	~FragTrap();
	FragTrap	(const FragTrap& copy);
	FragTrap&	operator= (const FragTrap& other);

	void    attack(const string& target);
    void    highFivesGuys(void);
};

#endif
