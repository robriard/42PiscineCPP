/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:40:07 by unknow            #+#    #+#             */
/*   Updated: 2021/11/19 16:28:20 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("28C"), _signed(false), _sigGrade(1), _exeGrade(1) {
    std::cout << "[Form] Default constructor called" << std::endl;
    return;
}

Form::Form(Form const & src) :
    _name(src._name), _signed(false), _sigGrade(src._sigGrade), _exeGrade(src._exeGrade) {
    std::cout << "[Form] Copy constructor called" << std::endl;
    return;
}

Form::Form(std::string const name, int const sigGrade, int const exeGrade) :
    _name(name), _signed(false), _sigGrade(sigGrade), _exeGrade(exeGrade) {
        try {
            if (this->_sigGrade > LOW_GRADE || this->_exeGrade > LOW_GRADE)
                throw low;
            if (this->_sigGrade < HIGH_GRADE || this->_exeGrade < HIGH_GRADE)
                throw high;
            else
                std::cout << "[Form] Overload constructor called" << std::endl;
            return;
        }
        catch (GradeTooLowException& e){
            std::cout << "[Form] Overload constructor " << e.what() << std::endl;
            return;
        }
        catch (GradeTooHighException& e) {
            std::cout << "[Form] Overload constructor " << e.what() << std::endl;
            return;
        }
}

Form::~Form(){
    std::cout << "[Form] Destructor called" << std::endl;
    return;
}

Form&       Form::operator=(Form const & rhs){
    this->_signed = rhs._signed;
    std::cout << "[Form] operator = called" << std::endl;
    return *this;
}

std::string const &     Form::getName(void) const {
    return this->_name;
}

bool const&                  Form::getSigne(void) const {
    return this->_signed;
}

int const &                  Form::getSigGrade(void) const {
    return this->_sigGrade;
}

int const &                  Form::getExeGrade(void) const {
    return this->_exeGrade;
}

void                         Form::beSigned(Bureaucrat& peon){
    try {
        if (peon.getGrade() > this->_sigGrade)
            throw GradeTooLowException();
        else
            this->_signed = true;
        return;
    }
    catch (GradeTooLowException& e){
        std::cout << "[Form] " << e.what() << std::endl;
        return;
    }
}

void                        Form::setSigne(bool signe){
    this->_signed = signe;
    return;
}

std::ostream&   operator<<(std::ostream& os, Form const& rhs) {
    os << rhs.getName() << ":" << std::endl
        << "    signe: " << rhs.getSigne() << std::endl
        << "    sigGrade: " << rhs.getSigGrade() << std::endl
        << "    exeGrade: " << rhs.getExeGrade() << std::endl;
    return os;
}