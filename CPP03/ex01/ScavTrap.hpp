/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:51:50 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/25 15:51:52 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

/*ScavTrap est la classe fille - ClapTrap la classe mère
ScavTrap hérite de CLapTrap et contiendra tous ses attributs
et méthodes.*/
class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
    ~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &rhs);
	void 		attack(const std::string &target);
	void		guardGate(void);
};

#endif