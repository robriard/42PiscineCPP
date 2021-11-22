/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:50:35 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 14:43:41 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("President", 25, 5), _target("President"){
    std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : AForm("President", 25, 5), _target(target){
    std::cout << "[PresidentialPardonForm] Overload constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm("President", 25, 5), _target(src._target){
    std::cout << "[PresidentialPardonForm] Copy constructor called" << std::endl;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "[PresidentialPardonForm] Destructor called" << std::endl;
    return;
}

PresidentialPardonForm&     PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
    std::cout << "[PresidentialPardonForm] operator = called" << std::endl;
    this->setName(rhs.getName());
    this->setSigGrade(25);
    this->setExeGrade(5);
    this->_target = rhs._target;
    return *this;
}

void                        PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    try {
        if (this->getSigne() == 0)
            throw NotSigendException();
        else if (this->getExeGrade() < executor.getGrade())
            throw GradeTooLowException();
        else
            std::cout << this->_target << " was forgiven by  Zafod Beeblebrox." << std::endl;
        return;
    }
    catch (NotSigendException & e) {
        std::cout << e.what() << std::endl;
        return;
    }
    catch (GradeTooLowException & e) {
        std::cout << e.what() << std::endl;
        return;
    }
}
