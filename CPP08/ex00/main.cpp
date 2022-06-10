/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:28:30 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/10 13:49:58 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main(void)
{
    try
    {
        std::vector<int> v(5);
        for (unsigned int i = 0; i < v.size(); i++)
            v[i] = i + 1;
        easyfind(v, 3);
        easyfind(v, 12);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << NC << '\n';
    }
    
    try
    {
        std::deque<int> d(5);
        for (unsigned int i = 0; i < d.size(); i++)
            d[i] = i * 100;
        easyfind(d, 300);
        easyfind(d, 50);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED <<  e.what() << NC <<'\n';
    }

    try
    {
        std::list<int> l;
        l.push_back(12);
        l.push_back(23);
        l.push_back(42);
        l.push_back(20);
        l.push_back(7);
        easyfind(l, 20);
        easyfind(l, 77);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << NC << '\n';
    }
    return 0;
}