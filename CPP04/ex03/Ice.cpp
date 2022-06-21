/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 08:40:39 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 08:55:02 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const &type) : AMateria(type)
{
    this->_type = "ice";
}

Ice::~Ice()
{

}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
    this->_type = copy._type;
}

Ice &Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

std::string const &Ice::getType(void) const
{
    return AMateria::getType();
}

AMateria *Ice::clone(void) const
{
    Ice *i = new Ice(*this);

    return i;
}

void Ice::use(ICharacter &target)
{
    std::cout << "Ice : *shoots an ice bolt at " << target.getName() << " * \n";
}