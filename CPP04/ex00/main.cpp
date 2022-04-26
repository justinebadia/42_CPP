/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:46:25 by jbadia            #+#    #+#             */
/*   Updated: 2022/04/26 11:07:21 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << std::endl <<RED "---- CONSTRUCTEUR ----\n" NC ;
    Animal vache;
    const Animal *kitty = new Cat();
    const Animal *doggo = new Dog();

    std::cout << std::endl <<RED "---- SOUND ----\n" NC ;
    kitty->makeSound();
    doggo->makeSound();
    vache.makeSound();

    std::cout << std::endl <<RED "---- TYPES ----\n" NC ;
    std::cout << VIO "Kitty est de type " << kitty->getType() << " " NC << std::endl;
    std::cout << CYN "Doggo est de type " << doggo->getType() << " " NC << std::endl;
    std::cout << GRN "Vache est de type " << vache.getType() << " " NC << std::endl;

    std::cout << std::endl <<RED "---- DESTRUCTEUR ----\n" NC ;
    delete kitty;
    delete doggo;

    std::cout << std::endl <<RED "---- WRONG ----\n" NC ;
    std::cout <<RED "---- CONSTRUCTEUR ----\n" NC ;
    WrongAnimal canard;
    const WrongAnimal *kat = new WrongCat();

    std::cout << std::endl <<RED "---- SOUND ----\n" NC ;
    kat->makeSound();
    canard.makeSound();

    std::cout << std::endl <<RED "---- TYPES ----\n" NC ;
    std::cout << VIO "Kat est de type " << kat->getType() << " " NC << std::endl;
    std::cout << GRN "Canard est de type " << canard.getType() << " " NC << std::endl;
    
    return 0;
}