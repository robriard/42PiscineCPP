/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:57:03 by unknow            #+#    #+#             */
/*   Updated: 2021/11/15 11:40:58 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
    std::cout << "===== CLAPTRAP TESTS =====" << std::endl << std::endl;
    {
        ClapTrap claptrap1("Kévin");
        ClapTrap claptrap2("Dylan");
        ClapTrap claptrap3 = claptrap1;
        ClapTrap claptrap4(claptrap2);

        std::cout << std::endl << std::endl;
        std::cout << "claptrap1 name is " << claptrap1.getName() << std::endl;
        std::cout << "claptrap2 name is " << claptrap2.getName() << std::endl;
        std::cout << "claptrap3 name is " << claptrap3.getName() << std::endl;
        std::cout << "claptrap4 name is " << claptrap4.getName() << std::endl;

        std::cout << std::endl << std::endl;
        claptrap1.attack("Bobby");
        claptrap2.attack("Billy");

        std::cout << std::endl << std::endl;
        claptrap3.takeDamage(5);
        std::cout << claptrap3.getName() << "(claptrap3) have " << claptrap3.getEnergy()
            << " Energy Points" << std::endl;
        claptrap4.beRepaired(5);
        std::cout << claptrap4.getName() << "(claptrap4) have " << claptrap4.getEnergy()
            << " Energy Points" << std::endl;
        claptrap4.takeDamage(10);
        std::cout << claptrap4.getName() << "(claptrap4) have " << claptrap4.getEnergy()
            << " Energy Points" << std::endl;
        claptrap3.beRepaired(3);
        std::cout << claptrap3.getName() << "(claptrap3) have " << claptrap3.getEnergy()
            << " Energy Points" << std::endl;
    }

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "===== SCAVTRAP TESTS =====" << std::endl << std::endl;
    {
        ScavTrap ScavTrap1("Kévin");
        ScavTrap ScavTrap2("Dylan");
        ScavTrap ScavTrap3 = ScavTrap1;
        ScavTrap ScavTrap4(ScavTrap2);

        std::cout << std::endl << std::endl;
        std::cout << "ScavTrap1 name is " << ScavTrap1.getName() << std::endl;
        std::cout << "ScavTrap2 name is " << ScavTrap2.getName() << std::endl;
        std::cout << "ScavTrap3 name is " << ScavTrap3.getName() << std::endl;
        std::cout << "ScavTrap4 name is " << ScavTrap4.getName() << std::endl;

        std::cout << std::endl << std::endl;
        ScavTrap1.attack("Bobby");
        ScavTrap2.attack("Billy");

        std::cout << std::endl << std::endl;
        ScavTrap3.takeDamage(5);
        std::cout << ScavTrap3.getName() << "(ScavTrap3) have " << ScavTrap3.getEnergy()
            << " Energy Points" << std::endl;
        ScavTrap4.beRepaired(5);
        std::cout << ScavTrap4.getName() << "(ScavTrap4) have " << ScavTrap4.getEnergy()
            << " Energy Points" << std::endl;
        ScavTrap4.takeDamage(10);
        std::cout << ScavTrap4.getName() << "(ScavTrap4) have " << ScavTrap4.getEnergy()
            << " Energy Points" << std::endl;
        ScavTrap3.beRepaired(3);
        std::cout << ScavTrap3.getName() << "(ScavTrap3) have " << ScavTrap3.getEnergy()
            << " Energy Points" << std::endl;
    }
    return 0;
}