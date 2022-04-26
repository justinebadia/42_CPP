/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:02:07 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/26 10:30:03 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << VIO << _type << " a été construit." NC << std::endl;
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << VIO << _type << " a été détruit." NC << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
    *this = src;
    std::cout << VIO << _type << " constructeur de recopie." NC << std::endl;
    return ;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}


void WrongCat::makeSound(void) const
{
    std::cout << VIO << _type << ": Miaouuss Miaouuss !" NC << std::endl;
}

std::string WrongCat::getType(void) const
{
    return WrongAnimal::getType();
}