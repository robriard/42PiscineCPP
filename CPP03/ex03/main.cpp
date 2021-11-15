/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:57:03 by unknow            #+#    #+#             */
/*   Updated: 2021/11/14 09:51:44 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main(void){
    /*
     *      Claptrap Tests
     */
    std::cout << "===== Claptrap Tests =====" << std::endl;
    {
        ClapTrap Robot1("Kévin");
        ClapTrap Robot2("John Cena");
        ClapTrap Robot3 = Robot1;
        ClapTrap Robot4(Robot2);
        std::cout << std::endl;

        std::cout << "Robot1 name is " << Robot1.getName() << std::endl;
        std::cout << "Robot2 name is " << Robot2.getName() << std::endl;
        std::cout << "Robot3 name is " << Robot3.getName() << std::endl;
        std::cout << "Robot4 name is " << Robot4.getName() << std::endl;
        std::cout << std::endl;

        Robot1.attack("Bobby");
        Robot2.attack("Billy");
        std::cout << std::endl;

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
        std::cout << std::endl;
    }
    
    /*
     *      Scavtrap Tests
     */
    std::cout << std::endl << std::endl << "===== Scavtrap Tests =====" << std::endl;
    {
        ScavTrap Robot1("Kévin");
        ScavTrap Robot2("John Cena");
        ScavTrap Robot3 = Robot1;
        ScavTrap Robot4(Robot2);
        std::cout << std::endl;

        std::cout << "Robot1 name is " << Robot1.getName() << std::endl;
        std::cout << "Robot2 name is " << Robot2.getName() << std::endl;
        std::cout << "Robot3 name is " << Robot3.getName() << std::endl;
        std::cout << "Robot4 name is " << Robot4.getName() << std::endl;
        std::cout << std::endl;

        Robot1.attack("Bobby");
        Robot2.attack("Billy");
        std::cout << std::endl;

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
        std::cout << std::endl;
    }

    /*
     *      Fragtrap Tests
     */
    std::cout << std::endl << std::endl << "===== Fragtrap Tests =====" << std::endl;
    {
        DiamondTrap Robot1("Kévin");
        DiamondTrap Robot2("John Cena");
        DiamondTrap Robot3 = Robot1;
        DiamondTrap Robot4(Robot2);
        std::cout << std::endl;

        std::cout << "Robot1 name is " << Robot1.getName() << std::endl;
        std::cout << "Robot2 name is " << Robot2.getName() << std::endl;
        std::cout << "Robot3 name is " << Robot3.getName() << std::endl;
        std::cout << "Robot4 name is " << Robot4.getName() << std::endl;
        std::cout << std::endl;

        Robot1.attack("Bobby");
        Robot2.attack("Billy");
        std::cout << std::endl;

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
    }

    /*
     *      Diamond Tests
     */
    std::cout << std::endl << std::endl << "===== Fragtrap Tests =====" << std::endl;
    {
        FragTrap Robot1("Kévin");
        FragTrap Robot2("John Cena");
        FragTrap Robot3 = Robot1;
        FragTrap Robot4(Robot2);
        std::cout << std::endl;

        std::cout << "Robot1 name is " << Robot1.getName() << std::endl;
        std::cout << "Robot2 name is " << Robot2.getName() << std::endl;
        std::cout << "Robot3 name is " << Robot3.getName() << std::endl;
        std::cout << "Robot4 name is " << Robot4.getName() << std::endl;
        std::cout << std::endl;

        Robot1.attack("Bobby");
        Robot2.attack("Billy");
        std::cout << std::endl;

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
    }
    return 0;
}