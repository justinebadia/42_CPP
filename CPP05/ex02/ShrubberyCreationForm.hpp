/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:45:18 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/05 16:41:31 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM
#define SHRUBBERY_CREATION_FORM

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &copy);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
        void 			beSigned(Bureaucrat &b);
        void	    execute(Bureaucrat const &executor) const;
};


#endif