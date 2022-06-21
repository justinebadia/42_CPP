/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:28:53 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 11:38:50 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
     for (int i = 0; i < 4; i++)
        _inventory[i] = copy._inventory[i];
}

MateriaSource::~MateriaSource()
{
     for (int i = 0; i < 4; i++)
       delete _inventory[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            delete this->_inventory[i];
            if(rhs._inventory[i])
                this->_inventory[i] = rhs._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m->clone();
            break ;
        }

    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 4; i > 0; i--)
    {
        if (this->_inventory[i] && this->_inventory[i]->getType() == type)
            return this->_inventory[i]->clone();
    }
    return NULL;
}