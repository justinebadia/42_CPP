/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:54:51 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/13 18:33:14 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : m_name(name)
{}

Zombie::~Zombie()
{
	std::cout << m_name << " a été détruit !" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << m_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
		m_name = name;
}