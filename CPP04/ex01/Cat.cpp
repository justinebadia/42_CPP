/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:02:07 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/04 15:46:13 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    _catBrain = new Brain();
    std::cout << VIO << _type << " a été construit." NC << std::endl;
    return ;
}

Cat::~Cat()
{
    delete _catBrain;
    std::cout << VIO << _type << " a été détruit." NC << std::endl;
}

//https://en.wikipedia.org/wiki/Object_copying#Shallow_copy 
Cat::Cat(Cat const &src) : Animal(src)
{
    _catBrain = new Brain(*(src._catBrain));
    _type = src._type;
    std::cout << VIO << _type << " constructeur de recopie." NC << std::endl;
    return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
        delete _catBrain;
        this->_catBrain = new Brain(*rhs._catBrain);
    }
    return *this;
}


void Cat::makeSound(void) const
{
    std::cout << VIO << _type << ": Miaouu Miaouu !" NC << std::endl;
}

std::string Cat::getType(void) const
{
    return Animal::getType();
}

void Cat::printIdea(void) const
{
     for (int i = 0; i < 100; i++)
        std::cout << RED "Idea " << i << ": " << _catBrain->getIdea(i) << NC << std::endl;
}

Brain *Cat::getBrain(void)
{
    return (_catBrain);
}