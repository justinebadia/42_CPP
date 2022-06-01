/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:37:27 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/01 11:19:48 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <iostream>

typedef struct Data
{
	int			_nb;
	std::string _str;
	double		_db;
}				Data;

uintptr_t 	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif