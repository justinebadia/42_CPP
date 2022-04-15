/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:09:59 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 12:10:13 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
    Harl laRelou;

    if (argc < 2)
        std::cout << VIO"Wow ! You are silent ... are you dead ?" NC << std::endl;
    else if (argc > 2)
        std::cout << VIO "Wow ! You talk too much !!" NC << std::endl;
    else
    {

        std::string level = argv[1];
        laRelou.complain(level);
    }
    return (0);

}