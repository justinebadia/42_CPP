/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:18:22 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/29 15:01:19 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << BLU "Constructeur de Brain" NC << std::endl;
    return ;
}

Brain::~Brain()
{
    std::cout << BLU "Desctructeur de Brain" NC << std::endl;
    return;
}

Brain::Brain(Brain const &src)
{
    *this = src;
    std::cout << BLU "Constructeur de recopie de Brain" NC << std::endl;
    return ;
}

Brain &Brain::operator=(Brain const &rhs)
{
    if( this != &rhs)
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = rhs._ideas[i];
    return *this;
}

void Brain::setIdea(std::string data)
{
    for(int i = 0; i < 100; i++)
        _ideas[i] = data;
}

std::string Brain::getIdea(int index)
{
    return (_ideas[index]);
}