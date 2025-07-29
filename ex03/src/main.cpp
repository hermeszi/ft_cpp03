/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuen <myuen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:29 by myuen             #+#    #+#             */
/*   Updated: 2025/07/17 17:31:24 by myuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

static void testFragTrap()
{
	FragTrap wildchild("FR4G");
	FragTrap copy(wildchild);

	std::cout << std::endl;

	wildchild.attack("Psycho");
	wildchild.takeDamage(60);
	wildchild.beRepaired(90);
	wildchild.highFivesGuys();

	std::cout << std::endl;

	copy.attack("Reflection");
	copy.takeDamage(200);
	copy.highFivesGuys();
	copy.attack("Shadow");

	std::cout << std::endl;
}

static void testDiamondTrap()
{
    DiamondTrap dia("Shiny");

    std::cout << std::endl;
    dia.attack("Handsome Jack");
    dia.takeDamage(20);
    dia.beRepaired(15);

    std::cout << std::endl;
    dia.whoAmI();
	dia.highFivesGuys();
	dia.guardGate();

    std::cout << std::endl;
    DiamondTrap twin(dia);
    twin.attack("Clone Jack");

    std::cout << std::endl;
    std::cout << "Now overwriting twin with dia again..." << std::endl;
    twin = dia;
    twin.whoAmI();
}

int main()
{
	std::cout << "\n--- CLAPTRAP TEST---\n" << std::endl;
	testClapTrap();
	std::cout << "\n--- SCAVTRAP TEST---\n" << std::endl;
	testScavTrap();
	std::cout << "\n--- FRAGTRAP TEST---\n" << std::endl;
	testFragTrap();
	std::cout << "\n--- DiamondTRAP TEST---\n" << std::endl;
	testDiamondTrap();
	return (0);
}
