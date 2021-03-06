/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:10:12 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/21 11:12:17 by jbadia           ###   ########.fr       */
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

class Fixed
{
	public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();

	Fixed 	&operator=(Fixed const &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	private:
		int _integer;
		static const int _bits;
};

#endif