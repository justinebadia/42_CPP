/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:10:17 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/27 15:57:38 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <stdio.h>

const int Fixed::_bits = 8;

Fixed::Fixed() : _nb(0)
{
	std::cout << GRN "Default constructor called" NC << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << CYN "Copy constructor called" NC << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int nb)
{
	std::cout << CYN "Int constructor called" NC << std::endl;
	this->_nb = (nb << _bits);
}

Fixed::Fixed(float const nb)
{
	std::cout << CYN "Float constructor called" NC << std::endl;
	this->_nb = roundf(nb * (float)(1 << _bits));
}

Fixed::~Fixed()
{
	std::cout << RED "Destructor called" NC << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << VIO "Copy assignment operator called" NC << std::endl;
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_nb);
}

void Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}

std::ostream    &operator<<(std::ostream &o, Fixed const &nb)
{
    o << nb.toFloat();
    return (o);
}

float	Fixed::toFloat() const
{
	return ((float)_nb / (1 << _bits));
}

int	Fixed::toInt() const
{
	return (_nb >> _bits);
}