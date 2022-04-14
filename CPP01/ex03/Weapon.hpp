/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:47 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/14 17:08:36 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string const &getType(void);
    void setType(std::string newArm);

    private:
    std::string m_type;
};

#endif
