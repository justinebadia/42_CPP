/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:10:20 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 16:01:24 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    m_array[0] = "DEBUG";
    m_array[1] = "INFO";
    m_array[2] = "WARNING";
    m_array[3] = "ERROR";
    m_f[0] = &Harl::debug;
    m_f[1] = &Harl::info;
    m_f[2] = &Harl::warning;
    m_f[3] = &Harl::error;
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
    std::cout << VIO "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." NC << std::endl;
}

void    Harl::error(void)
{
    std::cout << RED "This is unacceptable! I want to speak to the manager now." NC << std::endl;
}

void    Harl::complain(std::string level)
{
    if (level.c_str() == NULL || level.empty())
        std::cout << BLU "Hi I'm relou" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (m_array[i] == level)
            (this->*m_f[i])();
    }
}