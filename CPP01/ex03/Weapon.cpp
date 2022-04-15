/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:45 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 11:50:22 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) : m_type(type)
{}

Weapon::Weapon()
{}

Weapon::~Weapon()
{}


std::string const &Weapon::getType(void)
{
    return(m_type);
}

void Weapon::setType(std::string newArm) //passer en reference pour ne pas qu'on envoie un truc non valide ?
{
    m_type = newArm;
}