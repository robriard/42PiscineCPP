/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:24:00 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 14:44:03 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("President", 72, 45), _target("President"){
    std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : AForm("President", 72, 45), _target(target){
    std::cout << "[RobotomyRequestForm] Overload constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm("President", 72, 45), _target(src._target){
    std::cout << "[RobotomyRequestForm] Copy constructor called" << std::endl;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "[RobotomyRequestForm] Destructor called" << std::endl;
    return;
}

RobotomyRequestForm&     RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
    std::cout << "[RobotmyRequestForm] operator = called" << std::endl;
    this->setName(rhs.getName());
    this->setSigGrade(72);
    this->setExeGrade(45);
    this->_target = rhs._target;
    return *this;
}

void                        RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    try {
        if (this->getSigne() == 0)
            throw NotSigendException();
        else if (this->getExeGrade() < executor.getGrade())
            throw GradeTooLowException();
        else {
            switch (rand() % 2) {
                case 0:
                    std::cout << this->_target << ": robotization succeeded" << std::endl;
                    break;
                case 1:
                    std::cout << this->_target << ": robotization has failed" << std::endl;
                    break;
            }
        }
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