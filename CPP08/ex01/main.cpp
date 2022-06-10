/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:09 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/10 14:27:42 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    try
    {
        Span sp(2);

        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}