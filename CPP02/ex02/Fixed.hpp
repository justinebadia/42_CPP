/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:10:12 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/26 07:30:36 by jbadia           ###   ########.fr       */
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
	Fixed	operator+(Fixed const &rhs);
	Fixed	operator-(Fixed const &rhs);
	Fixed	operator*(Fixed const &rhs);
	Fixed	operator/(Fixed const &rhs);
	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed	&operator++(void);
	Fixed	&operator--(void);

	bool	operator<(Fixed const &rhs) const;
	bool	operator>(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

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