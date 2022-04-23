/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:22:00 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/23 13:49:34 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap Clappo("Clappo");
	ClapTrap Clappy;

	Clappo.attack("Sadik");
	Clappy.attack("Salgauss");
	Clappo.takeDamage(5);
	Clappo.beRepaired(10);
	Clappo.takeDamage(2);
	Clappo.takeDamage(4);
	Clappo.beRepaired(12);
	Clappo.takeDamage(9);
	Clappo.beRepaired(2);
	Clappo.attack("Sadik");
	Clappo.takeDamage(100);
	Clappo.beRepaired(200);
	Clappo.attack("Sadik");
}