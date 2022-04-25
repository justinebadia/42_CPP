/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:54:19 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/25 16:44:30 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
	_name = name;
    std::cout << VIO "Le constructeur a créé FragTrap " << _name << ". Il a " << _energyPoint << " vies" NC<< std::endl;

}

FragTrap::FragTrap() : ClapTrap()
{
	 _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
	std::cout << VIO "Constructeur par défaut de FragTrap. Son nom est " << _name << "." NC << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << VIO "FragTrap "<< _name << " a été détruit." NC << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << CYN "FragTrap copy constructor called" NC << std::endl;
	*this = src;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << VIO "Copy assignment operator called" NC << std::endl;
	if (this != &rhs)
	{
		this->_hitPoint = rhs._hitPoint;
    	this->_energyPoint = rhs._energyPoint;
    	this->_attackDamage = rhs._attackDamage;
		this->_name = rhs._name;
	}
	return (*this);
}

void 	FragTrap::highFivesGuys(void) const
{
	std::cout << GRN << _name << " : Tape m'en 5 ! " NC << std::endl;
}
