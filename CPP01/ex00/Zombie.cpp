/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:50:10 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 11:09:04 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{};

Zombie::~Zombie()
{};

void Zombie::announce(void)
{
    std::cout << m_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name)
{
    Zombie *new_Zombie;

    new_Zombie->m_name = name;
    
    return (new_Zombie);
}

void Zombie::randomChump(std::string name)
{
    Zombie new_Zombie;

    new_Zombie.m_name = name;
    new_Zombie.announce();
}