/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:09:59 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 16:01:01 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
    Harl    relou;
    
    relou.complain("");
    relou.complain("DEBUG");
    relou.complain("INFO");
    relou.complain("WARNING");
    relou.complain("ERROR");
}