/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:57:03 by unknow            #+#    #+#             */
/*   Updated: 2021/11/09 16:31:00 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap Robot1("Kévin");
    ClapTrap Robot2("John Cena");
    ClapTrap Robot3 = Robot1;
    ClapTrap Robot4(Robot2);

    std::cout << "Robot1 name is " << Robot1.getName() << std::endl;
    std::cout << "Robot2 name is " << Robot2.getName() << std::endl;
    std::cout << "Robot3 name is " << Robot3.getName() << std::endl;
    std::cout << "Robot4 name is " << Robot4.getName() << std::endl;

    Robot1.attack("Bobby");
    Robot2.attack("Billy");

    Robot3.takeDamage(5);
    std::cout << "Robot3 have " << Robot3.getEnergy()
        << " Energy Points" << std::endl;
    Robot4.beRepaired(5);
    std::cout << "Robot4 have " << Robot4.getEnergy()
        << " Energy Points" << std::endl;
    Robot4.takeDamage(10);
    Robot3.beRepaired(3);
    std::cout << "Robot3 have " << Robot3.getEnergy()
        << " Energy Points" << std::endl;
    return 0;
}