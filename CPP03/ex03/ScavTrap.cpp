/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:35:32 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/27 17:37:07 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
	_name = name;
    std::cout << VIO "Le constructeur a créé ScavTrap " << _name << ". Il a " << _energyPoint << " vies" NC<< std::endl;

}

ScavTrap::ScavTrap() : ClapTrap()
{
	 _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
	std::cout << VIO "Constructeur par défaut de ScavTrap. Son nom est " << _name << "." NC << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << VIO "ScavTrap "<< _name << " a été détruit." NC << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << CYN "ScavTrap copy constructor called" NC << std::endl;
	*this = src;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

void ScavTrap::guardGate(void)
{
	_energyPoint = 2000;
	_attackDamage = 5000;
	std::cout << GRN "ScavTrap " << _name << " est entré en mode GateKeeper." NC << std::endl;
}


void ScavTrap::attack(const std::string &target)
{
	 if (_energyPoint > 0)
    {
        std::cout << BLU << _name << " attacks " << target << " causing " << _attackDamage << " points of damage" NC << std::endl;
        _energyPoint--;
    }
    else
    	std::cout << RED << _name << " n'a plus d'énergie, il ne peut plus attaquer !" NC << std::endl;
}