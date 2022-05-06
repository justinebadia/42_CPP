/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:33:43 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/06 12:55:27 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern const &copy);

        Intern &operator=(Intern const &rhs);
        Form *makeForm(std::string const &nameForm, std::string const &target);

    private:
        std::string _name[3];

        Form        *(Intern::*_create[3])(std::string const &target);
        Form        *createShrubberyForm(std::string const &target);
        Form        *createRobotomyForm(std::string const &target);
        Form        *createPresidentialForm(std::string const &target);
};