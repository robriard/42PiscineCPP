/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:25:28 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 16:16:32 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int  hash(std::string FormName) {
    std::string tab_level[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    for (int i = 0; i < 3; i++){
        if (tab_level[i] == FormName)
            return i;
    }
    return -1;
};

Intern::Intern(){
    std::cout << "[Intern] Default constructor called" << std::endl;
}

Intern::Intern(Intern const & src){
    std::cout << "[Intern] Copy constructor called" << std::endl;
    *this = src;
}

Intern::~Intern(){
    std::cout << "[Intern] Destructor called" << std::endl;
}

Intern &   Intern::operator=(Intern const & rhs){
    std::cout << "[Intern] operator = called" << std::endl;
    (void)rhs;
    return *this;
}

AForm*   Intern::makeForm(std::string FormName, std::string target){
    try{
        switch (hash(FormName)) {
            case 0:
                return new PresidentialPardonForm(target);
                break;
            case 1:
                return new RobotomyRequestForm(target);
                break;
            case 2:
                return new ShrubberyCreationForm(target);
                break;
            default:
                throw BadNameException();
                break;
            }
    }
    catch (BadNameException& e){
        std::cout << e.what() << std::endl;
        return NULL;
    }
}