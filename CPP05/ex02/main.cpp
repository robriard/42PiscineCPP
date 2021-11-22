/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:06:00 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 14:50:27 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    Bureaucrat Robert("Robert", 1);
    Bureaucrat Gerard("Gérard", 150);
    std::cout << std::endl;
    std::cout << Robert;
    std::cout << Gerard;

    std::cout << std::endl;
    AForm *A = new ShrubberyCreationForm("house");
    A->execute(Robert); 
    Gerard.signForm(*A);   
    Robert.signForm(*A);
    A->execute(Gerard);
    A->execute(Robert);

    std::cout << std::endl;
    AForm *B = new PresidentialPardonForm("Néo");
    B->execute(Robert);
    Gerard.signForm(*B);
    Robert.signForm(*B);
    B->execute(Gerard);
    B->execute(Robert);

    std::cout << std::endl;
    AForm *C = new RobotomyRequestForm("Luigi");
    C->execute(Robert);
    Gerard.signForm(*C);
    Robert.signForm(*C);
    C->execute(Gerard);
    C->execute(Robert);
    C->execute(Robert);
    C->execute(Robert);
    C->execute(Robert);
    C->execute(Robert);
    C->execute(Robert);


    std::cout << std::endl;
    AForm *D = new ShrubberyCreationForm("garden");
    Robert.signForm(*D);
    Gerard.executeForm(*D);
    Robert.executeForm(*D);
    Gerard.executeForm(*B);
    Robert.executeForm(*B);
    Gerard.executeForm(*C);
    Robert.executeForm(*C);

    std::cout << std::endl;
    delete A;
    delete B;
    delete C;
    return 0;
}