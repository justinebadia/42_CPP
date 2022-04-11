/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:50:29 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/11 11:07:13 by jbadia           ###   ########.fr       */
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
    ~Zombie();
    Zombie *newZombie(std::string name);
    void    randomChump(std::string name);

    private:
    std::string m_name;
    void    announce(void);
};


#endif
