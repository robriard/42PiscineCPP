/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:06:00 by unknow            #+#    #+#             */
/*   Updated: 2021/11/22 16:18:47 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    Bureaucrat Robert("Robert", 1);
    Bureaucrat Gerard("Gérard", 150);
    Intern Titouan;

    std::cout << std::endl;
    AForm *A = Titouan.makeForm("presidential pardon", "Néo");
    A->execute(Robert);
    A->beSigned(Gerard);
    A->beSigned(Robert);
    A->execute(Gerard);
    A->execute(Robert);

    std::cout << std::endl;
    AForm *B = Titouan.makeForm("robotomy request", "Billy");
    B->execute(Robert);
    B->beSigned(Gerard);
    B->beSigned(Robert);
    B->execute(Gerard);
    B->execute(Robert);

    std::cout << std::endl;
    AForm *C = Titouan.makeForm("shrubbery creation", "house");
    C->execute(Robert);
    C->beSigned(Gerard);
    C->beSigned(Robert);
    C->execute(Gerard);
    C->execute(Robert);

    std::cout << std::endl;
    AForm *D = Titouan.makeForm("plop", "plop");
    if (D != NULL) {
        D->beSigned(Robert);
        D->execute(Robert);
        delete D;
    }

    std::cout << std::endl;
    delete A;
    delete B;
    delete C;
    return 0;
}