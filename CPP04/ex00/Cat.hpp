/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:00:34 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/26 10:28:52 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat();
    virtual ~Cat();
    Cat(Cat const &src);

    Cat &operator=(Cat const &rhs);
    virtual void makeSound(void) const;
    virtual std::string getType(void) const;
};