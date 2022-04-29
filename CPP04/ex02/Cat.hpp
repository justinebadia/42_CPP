/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:00:34 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/29 12:02:20 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
    Cat();
    virtual ~Cat();
    Cat(Cat const &src);

    Cat &operator=(Cat const &rhs);
    virtual void        makeSound(void) const;
    virtual std::string getType(void) const;
    void                printIdea(void) const;
    Brain               *getBrain(void);

    private:
    Brain   *_catBrain;

};