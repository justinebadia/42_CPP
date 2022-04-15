/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:10:20 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 14:22:48 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    m_array[0] = 
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

std::string const Harl::arrayHarl(void)
{
    std::string const array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    return (array);
}

void    Harl::complain(std::string level)
{
    switch(i)
    {
        case 1:
            debug();
            break;
        default:
         std::cout << RED "Hi I'm nice !" NC << std::endl;
         break;

    }
}