/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:51:38 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/25 15:51:38 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

class ClapTrap
{
    public:
    ClapTrap();
    ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
    ~ClapTrap();

	ClapTrap			&operator=(ClapTrap const &rhs);
    void 				takeDamage(unsigned int amount);
    void 				beRepaired(unsigned int amount);
    virtual void 		attack(const std::string& target);

    protected:
    std::string _name; 
    int         _hitPoint; 
    int 		_energyPoint; 
    int 		_attackDamage;

};


#endif