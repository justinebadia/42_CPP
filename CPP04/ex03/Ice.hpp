/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 08:40:37 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 08:41:11 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public : 
        Ice(std::string const &type);
        virtual ~Ice();
        Ice(Ice const &copy);
        Ice &operator=(Ice const &rhs);
        std::string const & getType(void) const; //Returns the materia type
        AMateria* clone() const;
        void use(ICharacter& target);

    private:
        std::string _type;
};



#endif