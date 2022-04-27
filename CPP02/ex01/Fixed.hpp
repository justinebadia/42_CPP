/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:10:12 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/27 15:55:24 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

#include <iostream>
#include <cmath>

class Fixed
{
	public:
	Fixed();
	Fixed(Fixed const &src);
    Fixed(int const nb);
    Fixed(float const nb);
	~Fixed();

	Fixed 	&operator=(Fixed const &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
	
	private:
		int 				_nb;
		static const int 	_bits;
};
/*On ne peut pas faire une surcharge de fonction membre pour les <<
le 1er param est une référence sur une instance de ostream (cout)
et en 2eme param, notre classe pour faire l'affichage*/
std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);

#endif