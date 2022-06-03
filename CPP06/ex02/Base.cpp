/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:45:45 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/03 14:43:14 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>

Base    *generate(void)
{
    srand((unsigned)time(0));
    int random = (rand()%3);
    switch (random)
    {
        case 0:
            return new A();
            break;
        case 1:
            return new B();
            break;
        default :
            return new C();
            break;
    }
}

void    identify(Base *p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a != NULL)
        std::cout << CYN "Par pointeur : Base est de type A" NC << std::endl;
    else if (b != NULL)
         std::cout << CYN "Par pointeur : Base est de type B" NC << std::endl;
    else if (c != NULL)
        std::cout << CYN "Par pointeur : Base est de type C" NC << std::endl; 
}

void    identify(Base &p)
{
    try 
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << VIO "Par référence : Base est de type A" NC << std::endl;
        (void)a;
    }
    catch (std::bad_cast &bad)
    {
        std::cout << RED "Base n'est pas de type A : " << bad.what() << NC << std::endl;
    }

     try 
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << VIO "Par référence : Base est de type B" NC << std::endl;
        (void)b;
    }
    catch (std::bad_cast &bad)
    {
        std::cout << RED "Base n'est pas de type B : " << bad.what() << NC << std::endl;
        
    }

        try 
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << VIO "Par référence : Base est de type C" NC << std::endl;
        (void)c;
    }
    catch (std::bad_cast &bad)
    {
        std::cout << RED "Base n'est pas de type C : " << bad.what() << NC << std::endl;
    
    }
}