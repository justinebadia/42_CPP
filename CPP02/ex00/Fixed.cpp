/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:10:17 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/21 11:13:17 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _integer(0)
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

Fixed::~Fixed()
{
	std::cout << RED "Destructor called" NC << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << VIO "Copy assignment operator called" NC << std::endl;
	if (this != &rhs)
		this->_integer = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << BLU "getRawBits member function called" NC << std::endl;
	return (this->_integer);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << BLU "setRawBits member function called" NC << std::endl;
	this->_integer = raw;
}