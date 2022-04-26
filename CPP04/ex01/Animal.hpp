/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:46:22 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/26 10:28:34 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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
    virtual ~Animal();
    Animal(Animal const &src);
    
    Animal &operator=(Animal const &rhs);

    virtual void makeSound(void) const;
    virtual std::string getType(void) const;
    
    protected:
    std::string _type;
};

#endif