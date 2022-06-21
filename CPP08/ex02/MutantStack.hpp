/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:04:44 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/21 07:38:33 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

#include <iostream>
#include <stack>
#include <deque>
#include <vector>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){}
        ~MutantStack(){}
        MutantStack(MutantStack const &copy) : std::stack<T>(copy.c){};

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(void)
        {
            return std::stack<T>::c.begin();
        }

        iterator end(void)
        {
            return std::stack<T>::c.end();
        }
};


#endif