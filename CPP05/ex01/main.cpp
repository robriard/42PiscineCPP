/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:06:00 by unknow            #+#    #+#             */
/*   Updated: 2021/11/19 17:19:27 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    Bureaucrat Robert("Robert", 100);
    Bureaucrat Gerard("Gérard", 30);
    std::cout << std::endl;
    std::cout << Robert;
    std::cout << Gerard;

    Form A;
    Form B("Allocation familliale", 50, 40);
    std::cout << std::endl;
    std::cout << A;
    std::cout << B;

    std::cout << std::endl;
    B.beSigned(Robert);
    std::cout << B.getName() << "(B) is " << B.getSigne() << std::endl;
    B.beSigned(Gerard);
    std::cout << B.getName() << "(B) is " << B.getSigne() << std::endl;
    B.setSigne(false);

    std::cout << std::endl;
    Gerard.signForm(A);
    std::cout << A.getName() << "(A) is " << A.getSigne() << std::endl;
    while (Gerard.getGrade() > A.getSigGrade())
        Gerard.gradeUp();
    std::cout << Gerard.getName() << "(Gerard) have " << Gerard.getGrade() << " grade" << std::endl;
    Gerard.signForm(A);
    std::cout << A.getName() << "(A) is " << A.getSigne() << std::endl;   

    std::cout << std::endl;
    return 0;
}