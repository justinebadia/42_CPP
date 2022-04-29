/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:46:20 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/29 15:40:33 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal";
    std::cout << GRN << _type << " a été construit." NC << std::endl;
    return ;
}

Animal::Animal(Animal const &src)
{
    *this = src;
    std::cout << GRN << _type << " constructeur de recopie." NC << std::endl;
    return ;
}

Animal::~Animal()
{
    std::cout << GRN << _type << " a été détruit." NC << std::endl;
    return ;
}

Animal &Animal::operator=(Animal const &rhs)
{
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << GRN << _type << ": Meuuuh Meuuuh !" NC << std::endl;
}

std::string Animal::getType(void) const
{
    return _type;
}
