/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:16:14 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/28 13:34:04 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(3.3f);
	Fixed d(50.5f);
	Fixed equal1(12.22f);
	Fixed equal2(12.22f);
	Fixed result = d/c;
	Fixed add = c + d;
	Fixed sub = c - d;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << BLU "5.05 * 2 = "<< b << std::endl;
	std::cout << "Le maximum entre a et b est : " <<Fixed::max(a,b) << std::endl;
	std::cout << "Le minimum entre a et b est : " <<Fixed::min(a,b) << std::endl;
	std::cout << BLU "50.5 / 3.3 = " << result << std::endl;
	std::cout << BLU "50.5 + 3.3 = " << add << std::endl;
	std::cout << BLU "3.3 - 50.5 = " << sub << std::endl;


	if (c > d)
		std::cout << BLU "c est supérieur à d \n";
	if (c < d)
		std::cout << BLU "c est inférieur à d \n";

	if (equal1 == equal2)
		std::cout << BLU "equal1 et equal 2 sont égaux\n";
	if (equal1 >= equal2)
		std::cout << BLU "equal1 est <= à equal 2 \n";
	if (c <= equal1)
		std::cout << BLU "c est <= equal1\n";
	if (c != d)
		std::cout << BLU "c et d ne sont pas éguaux\n";
    return 0;
}