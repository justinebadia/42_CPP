/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:02:48 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 18:00:42 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie;
    Zombie  zombos;

    zombie = new Zombie();
    zombie->newZombie("Bouboule");
    zombos.randomChump("Chouquette");
    delete zombie;
}