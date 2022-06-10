/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:07 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/10 15:25:38 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <numeric>

Span::Span()
{
    _n = 0;
    _count = 0;
    _span.reserve(_n);
}

Span:: ~Span()
{}

Span::Span(unsigned int n) : _n(n)
{
    _span.reserve(_n);
    _count = 0;
}

Span::Span(Span const &copy)
{
    *this = copy;
    return ;
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return *this;
}

void Span::addNumber(int number)
{
    if (_count == _n)
        throw fullException();
    _span[_count] = number;
    std::cout << _span[_count] << std::endl;
    _count++;
}

std::vector<int>::iterator Span::shortestSpan(void)
{
    std::vector<int> res;
    std::adjacent_difference(_span.front(), _span.back(), res);

 
}