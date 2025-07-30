/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/30 16:07:17 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

static void testClapTrap()
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
}

static void testScavTrap()
{
	ScavTrap gatekeeper("SC4V");
	ScavTrap backup(gatekeeper);

	std::cout << std::endl;

	gatekeeper.attack("Bandit");
	gatekeeper.takeDamage(30);
	gatekeeper.beRepaired(40);
	gatekeeper.guardGate();

	std::cout << std::endl;

	backup.attack("Clone");
	backup.takeDamage(120);
	backup.guardGate();     
	backup.attack("Clone");

	std::cout << std::endl;
}

int main()
{
	testClapTrap();
	std::cout << "\n--- SCAVTRAP TEST---\n" << std::endl;
	testScavTrap();
	return (0);
}
