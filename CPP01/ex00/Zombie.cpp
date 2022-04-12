/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:50:10 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/12 09:53:13 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : m_name(name)
{}

Zombie::~Zombie()
{
	std::cout << m_name << " a été tué par Rick !" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << m_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
