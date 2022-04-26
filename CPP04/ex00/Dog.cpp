/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:51:11 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/26 10:30:01 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << CYN <<  _type << " a été construit." NC << std::endl;
    return ;
}

Dog::~Dog()
{
    std::cout << CYN << _type << " a été détruit." NC << std::endl;
    return ;
}

Dog::Dog(Dog const &src) : Animal(src)
{
    *this = src;
    std::cout << CYN <<  _type << " constructeur de recopie." NC << std::endl;
    return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}


void Dog::makeSound(void) const
{
    std::cout << CYN << _type << ": Wooof Wooof !" NC << std::endl;
}

std::string Dog::getType(void) const
{
    return Animal::getType();
}