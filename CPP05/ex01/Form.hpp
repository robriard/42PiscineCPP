/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:15:16 by unknow            #+#    #+#             */
/*   Updated: 2021/11/19 17:07:41 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# define HIGH_GRADE 1
# define LOW_GRADE 150

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
public:
    class GradeTooLowException: public std::exception {
        public:
            virtual const char* what() const throw(){
                return "Grade Too Low Exception";
            
            }
    }low;
    class GradeTooHighException: public std::exception {
        public:
            virtual const char* what() const throw(){
                return "Grade Too High Exception";
            }
    }high;

    Form(void);
    Form(Form const & src);
    Form(std::string const name, int const _sigGrade, int const _exeGrade);
    ~Form();

    Form& operator=(Form const & rhs);

    std::string const & getName(void) const;
    bool const &        getSigne(void) const;
    int const &         getSigGrade(void) const;
    int const &         getExeGrade(void) const;
    void                beSigned(Bureaucrat& peon);
    void                setSigne(bool signe);

private:
    std::string const   _name;
    bool                _signed;
    int const           _sigGrade;
    int const           _exeGrade;
};

std::ostream&   operator<<(std::ostream& os, Form const& rhs);

#endif