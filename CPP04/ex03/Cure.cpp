/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 08:18:43 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 08:41:58 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure(std::string const &type) : AMateria(type)
{
    this->_type = "cure";
}

Cure::~Cure()
{

}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
    this->_type = copy._type;
}

Cure &Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

std::string const &Cure::getType(void) const
{
    return AMateria::getType();
}

AMateria *Cure::clone(void) const
{
    Cure *c = new Cure(*this);

    return c;
}

void Cure::use(ICharacter &target)
{
    std::cout << "Cure : * heals " << target.getName() << "'s wounds *" << std::endl;
}