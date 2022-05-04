/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:02:07 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/04 15:31:18 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    std::cout << VIO << _type << " a été construit." NC << std::endl;
    return ;
}

Cat::~Cat()
{
    std::cout << VIO << _type << " a été détruit." NC << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
    *this = src;
    std::cout << VIO << _type << " constructeur de recopie." NC << std::endl;
    return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
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