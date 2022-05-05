/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:45:31 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/05 16:35:42 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM
#define PRESIDENTIAL_PARDON_FORM

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &copy);

        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
        void	execute(Bureaucrat const &executor) const;

    private:
};


#endif