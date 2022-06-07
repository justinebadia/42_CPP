/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:34:49 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/06 12:54:00 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (void)
{
	std::string const str_tab[4] = {"oh", "salut", "ca", "va"};

	std::cout << CYN "STRING TEST\n" << NC;
	iter(str_tab, 4, printer);
	std::cout << std::endl << CYN "ADD + 2\n" << NC;
	iter(str_tab, 4, add);
	std::cout << std::endl;

	int int_tab[5] = {12, 10, 2, 3, 7};
	std::cout << CYN "INTEGER TEST\n" << NC;
	iter(int_tab, 5, printer);
	std::cout << std::endl << CYN "ADD + 2\n" << NC;
	iter(int_tab, 5, add);
	std::cout << std::endl;

	double db_tab[3] = {12.3, 7.7, 5.5};
	std::cout << CYN "DOUBLE TEST\n" << NC;
	iter(db_tab, 3, printer);
	std::cout << std::endl << CYN "ADD + 2\n" << NC;
	iter(db_tab, 3, add);

	return 0;
}