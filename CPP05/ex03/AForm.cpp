/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:40:07 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 14:01:07 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("28C"), _signed(false), _sigGrade(1), _exeGrade(1) {
    std::cout << "[AForm] Default constructor called" << std::endl;
    return;
}

AForm::AForm(AForm const & src) :
    _name(src._name), _signed(false), _sigGrade(src._sigGrade), _exeGrade(src._exeGrade) {
    std::cout << "[AForm] Copy constructor called" << std::endl;
    return;
}

AForm::AForm(std::string const name, int const sigGrade, int const exeGrade) :
    _name(name), _signed(false), _sigGrade(sigGrade), _exeGrade(exeGrade) {
        try {
            if (this->_sigGrade > LOW_GRADE || this->_exeGrade > LOW_GRADE)
                throw low;
            if (this->_sigGrade < HIGH_GRADE || this->_exeGrade < HIGH_GRADE)
                throw high;
            else
                std::cout << "[AForm] Overload constructor called" << std::endl;
            return;
        }
        catch (GradeTooLowException& e){
            std::cout << "[AForm] Overload constructor " << e.what() << std::endl;
            return;
        }
        catch (GradeTooHighException& e) {
            std::cout << "[AForm] Overload constructor " << e.what() << std::endl;
            return;
        }
}

AForm::~AForm(){
    std::cout << "[AForm] Destructor called" << std::endl;
    return;
}

AForm&       AForm::operator=(AForm const & rhs){
    this->_signed = rhs._signed;
    std::cout << "[AForm] operator = called" << std::endl;
    return *this;
}

std::string const &     AForm::getName(void) const {
    return this->_name;
}

bool const&                  AForm::getSigne(void) const {
    return this->_signed;
}

int const &                  AForm::getSigGrade(void) const {
    return this->_sigGrade;
}

int const &                  AForm::getExeGrade(void) const {
    return this->_exeGrade;
}

void                         AForm::beSigned(Bureaucrat& peon){
    try {
        if (peon.getGrade() > this->_sigGrade)
            throw GradeTooLowException();
        else
            this->_signed = true;
        return;
    }
    catch (GradeTooLowException& e){
        std::cout << "[AForm] " << e.what() << std::endl;
        return;
    }
}

void                        AForm::setSigne(bool signe){
    this->_signed = signe;
    return;
}

void                         AForm::setName(std::string const name) {
    this->_name = name;
    return;
}

void                         AForm::setSigGrade(int const sigGrade) {
    this->_sigGrade = sigGrade;
    return;
}

void                         AForm::setExeGrade(int const exeGrade) {
    this->_exeGrade = exeGrade;
    return;
}

std::ostream&   operator<<(std::ostream& os, AForm const& rhs) {
    os << rhs.getName() << ":" << std::endl
        << "    signe: " << rhs.getSigne() << std::endl
        << "    sigGrade: " << rhs.getSigGrade() << std::endl
        << "    exeGrade: " << rhs.getExeGrade() << std::endl;
    return os;
}