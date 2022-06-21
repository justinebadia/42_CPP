/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:04:35 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 07:41:50 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>

int main(void)
{
    std::cout << BLU "Test avec MutantStack<int> - 10 random int" NC << std::endl;
    MutantStack<int> mutant;
    srand((unsigned int)time(NULL));
    for(int i = 0; i < 10; i++)
        mutant.push(rand());
    MutantStack<int>::iterator it = mutant.begin();
    MutantStack<int>::iterator ite = mutant.end();
    for(; it != ite; it++)
        std::cout << CYN << *it << NC << std::endl;
    std::cout << RED "La size de mutant est de " << mutant.size() << NC << std::endl;
        
    std::cout << std::endl << BLU "Création de MutantCopy" NC << std::endl;
    MutantStack<int> mutant_copy(mutant);
    MutantStack<int>::iterator itcopy = mutant_copy.begin();
    MutantStack<int>::iterator itecopy = mutant_copy.end();
    for(; itcopy != itecopy; itcopy++)
        std::cout << CYN << *itcopy << NC << std::endl;
    std::cout << std::endl;

    std::cout << BLU "Retrait de 5 valeurs dans Mutant" NC << std::endl;
    for(int i = 0; i < 5; i++)
        mutant.pop();
    it = mutant.begin();
    ite = mutant.end();
    for(; it != ite; it++)
       std::cout << CYN << *it << NC << std::endl;
    std::cout << RED "La size de mutant est de " << mutant.size() << NC << std::endl;
    
    std::cout << std::endl << BLU "Test avec MutantStack<std::string>" NC << std::endl;
    MutantStack<std::string> str_mut;
    str_mut.push("yo");
    str_mut.push("comment ca se passe ");
    str_mut.push("dant ton espace ?");
    MutantStack<std::string>::iterator itstr = str_mut.begin();
    MutantStack<std::string>::iterator itestr = str_mut.end();
    for(; itstr != itestr; itstr++)
        std::cout << CYN << *itstr << NC << std::endl;
    std::cout << RED "La size de mutant est de " << str_mut.size() << NC << std::endl;
   
    return 0;
}