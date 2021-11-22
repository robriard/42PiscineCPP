/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:15:16 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 14:42:34 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# define HIGH_GRADE 1
# define LOW_GRADE 150

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
public:
    class GradeTooLowException: public std::exception {
        public:
            virtual const char* what() const throw(){
                return "[AForm] Grade Too Low Exception";
            
            }
    }low;
    class GradeTooHighException: public std::exception {
        public:
            virtual const char* what() const throw(){
                return "[AForm] Grade Too High Exception";
            }
    }high;
    class NotSigendException: public std::exception {
        public:
            virtual const char* what() const throw(){
                return "[AForm] Not Signed Exception";
            }
    }signe;

    AForm(void);
    AForm(AForm const & src);
    AForm(std::string const name, int const sigGrade, int const exeGrade);
    virtual ~AForm();

    AForm& operator=(AForm const & rhs);

    std::string const & getName(void) const;
    bool const &        getSigne(void) const;
    int const &         getSigGrade(void) const;
    int const &         getExeGrade(void) const;
    void                beSigned(Bureaucrat& peon);
    void                setSigne(bool signe);
    void                setName(std::string const name);
    void                setSigGrade(int const sigGrade);
    void                setExeGrade(int const exeGrade);
    virtual void        execute(Bureaucrat const & executor) const = 0;

private:
    std::string         _name;
    bool                _signed;
    int                 _sigGrade;
    int                 _exeGrade;
};

std::ostream&   operator<<(std::ostream& os, AForm const& rhs);

#endif