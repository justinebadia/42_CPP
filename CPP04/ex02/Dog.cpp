/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:51:11 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/29 14:59:17 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    _dogBrain = new Brain();
    std::cout << CYN <<  _type << " a été construit." NC << std::endl;
    return ;
}

Dog::~Dog()
{
    std::cout << CYN << _type << " a été détruit." NC << std::endl;
    delete _dogBrain;
    return ;
}

Dog::Dog(Dog const &src) : Animal(src)
{
    _dogBrain = new Brain(*src._dogBrain);
    _type = src._type;
    std::cout << CYN <<  _type << " constructeur de recopie." NC << std::endl;
    return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
        delete _dogBrain;
        this->_dogBrain = new Brain(*rhs._dogBrain);
    }
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

Brain *Dog::getBrain(void)
{
    return(_dogBrain);
}

void Dog::printIdea(void) const
{
     for (int i = 0; i < 100; i++)
        std::cout << RED "Idea " << i << ": " << _dogBrain->getIdea(i) << NC << std::endl;
}