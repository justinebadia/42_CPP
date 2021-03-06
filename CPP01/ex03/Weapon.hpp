/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:47 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 11:39:06 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
    Weapon(std::string type);
    Weapon();
    ~Weapon();
    std::string const &getType(void);
    void setType(std::string newArm);

    private:
    std::string m_type;
};

#endif
