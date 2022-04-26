/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:22:00 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/26 08:42:30 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap Didi("Didi");

	Didi.attack("Sadik");
	Didi.takeDamage(50);
	Didi.beRepaired(25);
	Didi.whoAmI();
}