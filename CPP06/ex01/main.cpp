/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:27:15 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/03 15:13:04 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"


/* Reinterpret_cast is used to convert a pointer of some data type into a pointer of
another data type,even if the data type before and after conversion are differents.
https://stackoverflow.com/questions/573294/when-to-use-reinterpret-cast*/

uintptr_t serialize(Data *ptr)
{
	std::cout << GRN "Serialization ...\n" << NC;
	uintptr_t p = reinterpret_cast<uintptr_t>(ptr);

	return p;
}

Data *deserialize(uintptr_t raw)
{
	Data *d;

	std::cout << GRN "Deserialization ...\n" << NC;
	d = reinterpret_cast<Data *>(raw);

	return d;
}

int main (void)
{
	Data *ptr = new Data;

	ptr->_nb = 12;
	ptr->_str = "test";
	ptr->_db = 42.42;
	std::cout << "La valeur de _nb est : " VIO << ptr->_nb << NC << std::endl;
	std::cout << "La valeur de _str est : " VIO << ptr->_str << NC << std::endl;
	std::cout << "La valeur de _db est : " VIO << ptr->_db << NC << std::endl;
	uintptr_t test = serialize(ptr);
	Data *ptr1 = deserialize(test);
	std::cout << "La valeur de test devrait être la même que _nb : " VIO << ptr1->_nb << NC << std::endl;
	std::cout << "La valeur de test devrait être la même que _str : " VIO << ptr1->_str << NC << std::endl;
	std::cout << "La valeur de test devrait être la même que _db : " VIO << ptr1->_db << NC << std::endl;
	
	delete ptr;
	
	return 0;
}