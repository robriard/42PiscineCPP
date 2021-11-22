/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:28:12 by unknow            #+#    #+#             */
/*   Updated: 2021/11/19 14:23:42 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Jean Louis"), _grade(125) {
    std::cout << "[Bureaucrat] Default constructor: called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
    try{
        if (grade > LOW_GRADE)
            throw GradeTooLowException();
        if (grade < HIGH_GRADE)
            throw GradeTooHighException();
        else
            std::cout << "[Bureaucrat] Overload constructor: called" << std::endl;
        return;   
    }
    catch(GradeTooLowException& e){
        std::cout << "[Bureaucrat] Overload constructor: " << low.what() << std::endl;
        this->_grade = LOW_GRADE;
        return;
    }
    catch(GradeTooHighException& e){
        std::cout << "[Bureaucrat] Overload constructor: " << high.what() << std::endl;
        this->_grade = HIGH_GRADE;
        return;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name), _grade(src._grade) {
    std::cout << "[Bureaucrat] Copy constructor called" << std::endl;
    return;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "[Bureaucrat] Destructor called" << std::endl;
    return;
}

Bureaucrat&             Bureaucrat::operator=(Bureaucrat const& rhs){
    this->_grade = rhs._grade;
    std::cout << "[Bureaucrat] operator = called" << std::endl;
    return *this;
}

std::string const&      Bureaucrat::getName(void) const {
    return this->_name;
}

int const&              Bureaucrat::getGrade(void)const {
    return this->_grade;
}

void                    Bureaucrat::gradeUp(void) {
    try {
        if (this->_grade == HIGH_GRADE)
            throw GradeTooHighException();
        else
            this->_grade--;
    }
    catch (GradeTooHighException& e) {
        std::cout << high.what() << std::endl;
        return;
    }
    return;
}

void                    Bureaucrat::gradeDown(void) {
    try {
        if (this->_grade == LOW_GRADE)
            throw GradeTooLowException();
        else
            this->_grade++;
    }
    catch (GradeTooLowException& e) {
        std::cout << low.what() << std::endl;
        return;
    }
    return;
}

std::ostream&   operator<<(std::ostream& os, Bureaucrat const& rhs) {
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return os;
}
