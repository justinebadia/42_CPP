/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:46:25 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/29 15:22:13 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

/*Une classe abstraite existe pour être héritée. Pour être abstraite, elle
doit contenir au moins une fonction virtuelle pure. Il est impossible d'instancier
un objet à partir d'une classe abstraite. DOonc les classes héritant d'une classe
abstraite doivent obligatoirement définir elles-mêmes les fonctions virtuelles pures */

int main(void)
{
    //Animal erreur;
    
    std::cout << RED "---------- CATS ---------\n" NC << std::endl;
    Cat kitty;
    Cat kat;
    std::cout << RED "---------- CAT IDEAS ---------" NC << std::endl;
    kitty.getBrain()->setIdea("Miaou");
    kitty.printIdea();
    kat = kitty;
    kat.printIdea();

    std::cout << RED "---------- DOGS ---------\n" NC << std::endl;
    std::cout << RED "---------- DOG IDEAS ---------" NC << std::endl;
    Dog dog;
    Dog doggo;
    dog.getBrain()->setIdea("ouf ouf");
    dog.printIdea();
    doggo = dog;
    doggo.printIdea();
    return 0;
}