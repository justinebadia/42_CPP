/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:28:28 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/10 15:20:07 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

class notFound : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return "Not Found !";
        }
};

template<typename T>
typename T::const_iterator  easyfind(T const &container, int nb)
{
   typename T::const_iterator it = find(container.begin(), container.end(), nb);
    if (it == container.end())
        throw notFound();
    else
    {
        std::cout << CYN << *it << NC << std::endl;
        return it;
    }
}

#endif