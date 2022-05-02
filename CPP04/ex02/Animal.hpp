/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:46:22 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/02 09:41:34 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

/*pour pouvoir détruire les différents objets, il faut que
 la fonction de destruction de l'objet (celle qui appellera delete) puisse accéder au destructeur du type de base et que
le compilateur se rend compte qu'il devra adapter le comportement du destructeur du type de base au type réel de l'objet
Le (1) implique que le destructeur doit être public, le (2) implique que le destructeur doit être virtuel.*/

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

#include <iostream>

class Animal
{
    public:
    Animal();
    Animal(Animal const &src);
    virtual ~Animal();
    
    Animal &operator=(Animal const &rhs);

    virtual void makeSound(void) const = 0;
    virtual std::string getType(void) const;
    
    protected:
    std::string _type;
};

#endif