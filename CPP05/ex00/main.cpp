/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:06:00 by unknow            #+#    #+#             */
/*   Updated: 2021/11/19 13:22:54 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat Robert("Robert", 150);
    Bureaucrat Gerard("Gérard", 1);
    Bureaucrat Titouan("Titouan", 75);
    Bureaucrat Gerard2 = Gerard;
    Bureaucrat Robert2(Robert);

    std::cout << std::endl;
    std::cout << Robert;
    std::cout << Gerard;
    std::cout << Titouan;
    std::cout << Gerard2;
    std::cout << Robert2;

    std::cout << std::endl;
    Titouan.gradeDown();
    std::cout << Titouan;
    Titouan.gradeUp();
    std::cout << Titouan;

    std::cout << std::endl;
    Robert.gradeDown();
    std::cout << Robert;
    Gerard.gradeUp();
    std::cout << Gerard;

    std::cout << std::endl;
    Robert.gradeUp();
    Gerard.gradeDown();
    std::cout << Robert;
    std::cout << Gerard;
}