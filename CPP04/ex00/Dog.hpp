/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:49:55 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/26 10:28:27 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
    public: 
    Dog();
    ~Dog();
    Dog(Dog const &src);
    
    Dog &operator=(Dog const &rhs);
    virtual void makeSound(void) const;
    virtual std::string getType(void) const;
};