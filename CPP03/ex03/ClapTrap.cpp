/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:51:59 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/25 15:51:59 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Clappy";
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
    std::cout << VIO "Le constructeur par défaut créait Clappy le ClapTrap" NC << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << CYN "ClapTrap copy constructor called" NC << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << VIO "Le destructeur détruit ClapTrap " << _name << "." NC << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << VIO "Le constructeur a créé ClapTrap " << _name << ". Il a " << _energyPoint << " vies" NC<< std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
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

void    ClapTrap::attack(const std::string &target)
{
    if (_energyPoint > 0)
    {
        std::cout << BLU "Clap Trap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage" NC << std::endl;
        _energyPoint--;
    }
    else
    	std::cout << RED "Clap Trap " << _name << " n'a plus d'énergie, il ne peut plus attaquer !" NC << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    _energyPoint -= amount;
	if (_energyPoint > 0)
    	std::cout << RED << _name << " se fait attaquer. Il ne lui reste plus que " << _energyPoint << " de vie." NC << std::endl;
	else
		std::cout << RED << _name << " prend " << amount << " de dégats. Il se meurt." NC << std::endl;	
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint > 0)
	{
		_energyPoint += (amount - 1);
		std::cout << CYN << _name << " se répare de " << amount << ". Il a maintenant " << _energyPoint << " de vie." NC << std::endl;
	}
	else
		std::cout << RED << _name << " ne peut pas se réparer, appelez une sirène." NC << std::endl;
		return ;
}