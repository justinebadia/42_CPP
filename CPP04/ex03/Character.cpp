/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:54:20 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 11:57:28 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &copy)
{
    this->_name = copy._name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = copy._inventory[i];

}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

Character &Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
        {
            delete this->_inventory[i];
            if (rhs._inventory[i])
                this->_inventory[i] = rhs._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }

    return *this;
}

std::string const &Character::getName(void) const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m->clone();
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
            this->_inventory[i] = NULL;
    }
}
