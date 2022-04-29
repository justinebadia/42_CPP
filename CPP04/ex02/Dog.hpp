/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:49:55 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/29 12:02:16 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public: 
    Dog();
    virtual ~Dog();
    Dog(Dog const &src);
    
    Dog &operator=(Dog const &rhs);
    virtual void        makeSound(void) const;
    virtual std::string getType(void) const;
    void                printIdea(void) const;
    Brain               *getBrain(void);

    private:
    Brain *_dogBrain;
};