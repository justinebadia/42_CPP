/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:10:20 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/16 12:28:15 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    m_array[0] = "DEBUG";
    m_array[1] = "INFO";
    m_array[2] = "WARNING";
    m_array[3] = "ERROR";
}

Harl::~Harl()
{}

void    Harl::debug(void)
{
    std::cout << GRN "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" NC << std::endl;
}

void    Harl::info(void)
{
    std::cout << CYN "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" NC << std::endl;
}

void    Harl::warning(void)
{
    std::cout << BLU "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." NC << std::endl;
}

void    Harl::error(void)
{
    std::cout << RED "This is unacceptable! I want to speak to the manager now." NC << std::endl;

}

void    Harl::complain(std::string level)
{
	unsigned int i = 0;
    for (; i < level.size() ; i++)
        if (level == m_array[i])
            break ;
    switch (i)
    {
        case 0:
            debug();
            break;
        case 1:
            info();
            break;
        case 2:
            warning();
            break;
        case 3:
            error();
            break;
        default:
            std::cout << VIO "Probably complaining about insignificant problems" NC << std::endl;
            break;
    }
}