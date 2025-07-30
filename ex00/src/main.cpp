/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/30 16:05:19 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap baseModel("Dumbass");
	ClapTrap clone(baseModel);

	std::cout << std::endl;

	baseModel.attack("Bandit");
	baseModel.takeDamage(3);
	baseModel.beRepaired(5);

	std::cout << std::endl;

	baseModel.attack("Psycho");
	baseModel.takeDamage(11);
	baseModel.attack("Psycho 2");

	std::cout << std::endl;
	baseModel.beRepaired(3);
	std::cout << std::endl;

	std::cout << "Time for the clone to strike!" << std::endl;
	std::cout << std::endl;

	clone.attack("Bruiser");
	clone.takeDamage(15);
	clone.attack("Bruiser");
	clone.beRepaired(20);

	std::cout << std::endl;

	return (0);
}
