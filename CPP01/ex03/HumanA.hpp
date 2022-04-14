/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:35 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/14 18:10:05 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    public:
    HumanA::~HumanA();
    HumanA::HumanA(Weapon &weapon);

    void    attack(void)const;
    private:
    Weapon &m_weapon;
    std::string m_name;
};