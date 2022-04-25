/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:22:00 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/25 15:51:16 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{

	std::cout << GRN "----- SCAVTRAP ----- \n" << std::endl << " --- CLAPPY --- " NC<< std::endl;
	ScavTrap Clappy;
	std::cout << std::endl << GRN " --- CLOPETTE ---" NC << std::endl;
	ScavTrap Clopette("Clopette");
	std::cout << std::endl;
	Clappy.attack("Beau Jack");
	Clopette.attack("Beau Jack");
	Clappy.takeDamage(30);
	Clopette.takeDamage(50);
	Clopette.guardGate();
	Clappy.beRepaired(10);

	std::cout << std::endl << GRN "----- CLAPTRAP ----- " NC << std::endl;
	std::cout << std::endl << GRN " --- CLAPPO ---" NC << std::endl;
	ClapTrap Clappo("Clappo");
	Clappo.attack("Beau Jack");
	Clappo.takeDamage(5);
	Clappo.beRepaired(3);
	Clappo.takeDamage(10);
	Clappo.beRepaired(10);
	std::cout << std::endl;

}