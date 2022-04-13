/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:59:06 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/13 18:36:49 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define NC "\e[0m"
#define N 10


int main(void)
{
	Zombie 	*horde = NULL;

	horde = zombieHorde(N, "Bouboulos");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	if (N == 1)
		delete horde;
	else
		delete[] horde;
}