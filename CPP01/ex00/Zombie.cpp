/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:50:10 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 16:02:45 by jbadia           ###   ########.fr       */
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
