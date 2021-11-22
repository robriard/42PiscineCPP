/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:06:44 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 16:15:11 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <stdexcept>
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
public:
    class BadNameException: public std::exception {
        public:
            virtual const char* what() const throw(){
                return "[Intern] Bad name in first argument";
            }
    };
    Intern();
    Intern(Intern const & src);
    ~Intern();

    Intern&     operator=(Intern const & rhs);
    AForm*      makeForm(std::string FormName, std::string target);
};

#endif