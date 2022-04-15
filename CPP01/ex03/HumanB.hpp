/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:40 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 11:49:29 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    public:
    HumanB(std::string name);
    ~HumanB();

    void    attack(void)const;
    void    setWeapon(Weapon &weapon);

    private:
    Weapon *m_weapon;
    std::string m_name;
};