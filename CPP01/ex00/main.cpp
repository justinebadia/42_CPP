/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:02:48 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/12 10:57:25 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define NC "\e[0m"

int main(void)
{
    Zombie  *zombie;
	Zombie	*zombie1;

	std::cout << std::endl << BLU "Les zombies sur le tas/heap" << std::endl;
   	zombie = newZombie("Bouboule");
	zombie1 = newZombie("Fraisinette");
	zombie->announce();
	zombie1->announce();

	std::cout << std::endl << CYN "Les chump sur la pile/stack" << std::endl;
    randomChump("Chouquette");
	randomChump("Boulette");

	std::cout << std::endl << GRN "Les zombies meurent" << std::endl;	

    delete zombie;
	delete zombie1;
}