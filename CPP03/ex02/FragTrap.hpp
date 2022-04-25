/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:54:26 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/25 17:41:54 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
    ~FragTrap();

	FragTrap	&operator=(FragTrap const &rhs);
	void 		highFivesGuys(void) const;


};



#endif
