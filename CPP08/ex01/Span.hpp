/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:05 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/10 15:21:07 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

#include <iostream>
#include <vector>

class Span
{
    public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(Span const &copy);
    Span &operator=(Span const &rhs);
    
    void addNumber(int number);
    std::vector<int>::iterator shortestSpan();
    int longestSpan();

    private:
        unsigned int _n;
        unsigned int _count;
        std::vector <int>_span;
    
    class fullException : public std::exception
    {
        public: 
            virtual const char* what() const throw()
            {
                return "No more place !";
            }
    };
};

#endif