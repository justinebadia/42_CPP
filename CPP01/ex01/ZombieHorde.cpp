/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:51:51 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/13 18:36:34 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *horde;
	
	if (n == 1)
		return (new Zombie(name));
	if (n <= 0)
		return (NULL);
	horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].setName(name);
	return (horde);
}