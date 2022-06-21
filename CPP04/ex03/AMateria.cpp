/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:33:11 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 11:39:46 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

AMateria::~AMateria()
{}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;

}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

std::string const &AMateria::getType(void) const
{
    return this->_type;
}