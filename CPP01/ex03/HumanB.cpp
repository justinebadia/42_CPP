/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:37 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 12:00:55 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
   m_weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::attack(void)const
{
    if (m_weapon == NULL)
        std::cout << m_name << " is unarmed !" << std::endl;
    else
       std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    m_weapon = &weapon;
}