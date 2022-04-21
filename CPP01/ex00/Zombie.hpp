/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:50:29 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/21 10:39:31 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie
{
    public:
    Zombie();
	Zombie(std::string name);
    ~Zombie();
	//méthode constante qui se contente d'afficher des infomations
    void    announce(void)const;

    private:
    std::string m_name;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
