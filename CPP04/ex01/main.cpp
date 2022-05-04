/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:46:25 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/04 14:29:31 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define N 10

int main(void)
{
    Animal *animalTab = new Animal[N];

    for (int i = N - 1; i > 0 ; i--)
    {
        if (i % 2 == 0)
            animalTab[i] = Cat();
        else
            animalTab[i] = Dog();
    }
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << RED "---------- CATS ---------\n" NC << std::endl;
    Cat kitty;
    Cat kat;
    
    std::cout << RED "---------- CAT IDEAS ---------" NC << std::endl;
    kitty.getBrain()->setIdea("Miaou");
    kitty.printIdea();
    kat=kitty;
    kat.printIdea();

    std::cout << RED "---------- DOGS ---------\n" NC << std::endl;
    std::cout << RED "---------- DOG IDEAS ---------" NC << std::endl;
    Dog dog;
    Dog doggo;
    dog.getBrain()->setIdea("ouf ouf");
    dog.printIdea();
    doggo = dog;
    doggo.printIdea();

    delete j;
    delete i;
    delete[] animalTab;
    return 0;
}