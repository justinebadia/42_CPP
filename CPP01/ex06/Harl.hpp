/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:10:21 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 14:22:14 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

class Harl
{
    public:
    Harl();
    ~Harl();
    void    complain(std::string level);
    std::string const arrayHarl(void);

    private:
    std::string m_array[4];
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
};


#endif