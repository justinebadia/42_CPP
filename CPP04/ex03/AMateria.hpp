/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:33:09 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/20 17:55:42 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
    	std::string _type;

    public:
        AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &rhs);
    
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif