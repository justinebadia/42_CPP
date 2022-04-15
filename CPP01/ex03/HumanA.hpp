/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:35 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/15 10:26:15 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    public:
    ~HumanA();
    HumanA(std::string name, Weapon &weapon);

    void    attack(void)const;
    private:
    std::string m_name;
    Weapon &m_weapon;
};