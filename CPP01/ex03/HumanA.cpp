/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:32 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 10:18:37 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(weapon)
{}

HumanA::~HumanA()
{}

void    HumanA::attack(void)const
{
    std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}