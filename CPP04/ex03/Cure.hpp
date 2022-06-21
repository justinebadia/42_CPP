/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 08:18:42 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 08:28:02 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public : 
        Cure(std::string const &type);
        virtual ~Cure();
        Cure(Cure const &copy);
        Cure &operator=(Cure const &rhs);
        std::string const & getType(void) const; //Returns the materia type
        AMateria* clone() const;
        void use(ICharacter& target);

    private:
        std::string _type;
};



#endif