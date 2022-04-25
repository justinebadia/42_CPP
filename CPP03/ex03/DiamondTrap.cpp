/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:34:02 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/25 18:46:54 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	_name = "Diamond";
	_hitPoint = FragTrap::_hitPoint; 
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	std::cout << _name << " DiamondTrap est créé" << std::endl;
	//_hitPoint = FragTrap::_hitPoint;
	
	return ;
}