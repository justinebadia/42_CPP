/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:46:20 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/26 10:28:47 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream> 


WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
    std::cout << GRN << _type << " a été construit." NC << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    *this = src;
    std::cout << GRN << _type << " constructeur de recopie." NC << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << GRN << _type << " a été détruit." NC << std::endl;
    return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << GRN << _type << ": Coin coin !" NC << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return _type;
}