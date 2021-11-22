/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:14:31 by unknow            #+#    #+#             */
/*   Updated: 2021/11/19 14:21:49 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define HIGH_GRADE 1
# define LOW_GRADE 150

#include <iostream>
#include <stdexcept>

class Bureaucrat{
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
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const& src);
    ~Bureaucrat(void);

    Bureaucrat& operator=(Bureaucrat const& rhs);
    std::string const&      getName(void) const;
    int const&              getGrade(void) const;
    void                    gradeUp(void);
    void                    gradeDown(void);
    
private:
    Bureaucrat(void);
    std::string const   _name;
    int                 _grade;
};

std::ostream&   operator<<(std::ostream& os, Bureaucrat const& rhs);

#endif