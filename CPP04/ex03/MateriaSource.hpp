/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:26:29 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 10:32:08 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
 public:
    MateriaSource();
    MateriaSource(MateriaSource const &copy);
    MateriaSource &operator=(MateriaSource const &rhs);
    ~MateriaSource();
    
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

    private:
        AMateria *_inventory[4];
};

#endif