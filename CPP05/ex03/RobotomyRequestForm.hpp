/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:42:18 by jbadia            #+#    #+#             */
/*   Updated: 2022/05/05 16:37:22 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM
#define ROBOTOMY_REQUEST_FORM

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        virtual  ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &copy);

        RobotomyRequestForm &operator= (RobotomyRequestForm const &rhs);
        void 			beSigned(Bureaucrat &b);
        void	execute(Bureaucrat const &executor) const;

    private:
};


#endif