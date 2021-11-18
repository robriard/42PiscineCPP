/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:57:03 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 13:51:17 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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
        ScavTrap ScavTrap1("Titouan");
        ScavTrap ScavTrap2("Timothée");
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
        ScavTrap1.guardGate();
        ScavTrap2.guardGate();
        ScavTrap3.guardGate();
        ScavTrap4.guardGate();

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

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "===== FRAGTRAP TESTS =====" << std::endl << std::endl;
    {
        FragTrap FragTrap1("Mathéo");
        FragTrap FragTrap2("Noé");
        FragTrap FragTrap3 = FragTrap1;
        FragTrap FragTrap4(FragTrap2);

        std::cout << std::endl << std::endl;
        std::cout << "FragTrap1 name is " << FragTrap1.getName() << std::endl;
        std::cout << "FragTrap2 name is " << FragTrap2.getName() << std::endl;
        std::cout << "FragTrap3 name is " << FragTrap3.getName() << std::endl;
        std::cout << "FragTrap4 name is " << FragTrap4.getName() << std::endl;

        std::cout << std::endl << std::endl;
        FragTrap1.attack("Bobby");
        FragTrap2.attack("Billy");

        std::cout << std::endl << std::endl;
        FragTrap1.highFivesGuys();
        FragTrap2.highFivesGuys();
        FragTrap3.highFivesGuys();
        FragTrap4.highFivesGuys();

        std::cout << std::endl << std::endl;
        FragTrap3.takeDamage(5);
        std::cout << FragTrap3.getName() << "(FragTrap3) have " << FragTrap3.getEnergy()
            << " Energy Points" << std::endl;
        FragTrap4.beRepaired(5);
        std::cout << FragTrap4.getName() << "(FragTrap4) have " << FragTrap4.getEnergy()
            << " Energy Points" << std::endl;
        FragTrap4.takeDamage(10);
        std::cout << FragTrap4.getName() << "(FragTrap4) have " << FragTrap4.getEnergy()
            << " Energy Points" << std::endl;
        FragTrap3.beRepaired(3);
        std::cout << FragTrap3.getName() << "(FragTrap3) have " << FragTrap3.getEnergy()
            << " Energy Points" << std::endl;
    }

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "===== DIAMOND TESTS =====" << std::endl << std::endl;
    {
        DiamondTrap DiamondTrap1("Jean-Louis");
        DiamondTrap DiamondTrap2("Pierre-Edouard");
        DiamondTrap DiamondTrap3 = DiamondTrap1;
        DiamondTrap DiamondTrap4(DiamondTrap2);

        std::cout << std::endl << std::endl;
        std::cout << "DiamondTrap1 name is " << DiamondTrap1.getName() << std::endl;
        std::cout << "DiamondTrap2 name is " << DiamondTrap2.getName() << std::endl;
        std::cout << "DiamondTrap3 name is " << DiamondTrap3.getName() << std::endl;
        std::cout << "DiamondTrap4 name is " << DiamondTrap4.getName() << std::endl;

        std::cout << std::endl << std::endl;
        DiamondTrap1.attack("Bobby");
        DiamondTrap2.attack("Billy");

        std::cout << std::endl << std::endl;
        DiamondTrap1.whoAmI();
        DiamondTrap2.whoAmI();
        DiamondTrap3.whoAmI();
        DiamondTrap4.whoAmI();

        std::cout << std::endl << std::endl;
        DiamondTrap3.takeDamage(5);
        std::cout << DiamondTrap3.getName() << "(DiamondTrap3) have " << DiamondTrap3.getEnergy()
            << " Energy Points" << std::endl;
        DiamondTrap4.beRepaired(5);
        std::cout << DiamondTrap4.getName() << "(DiamondTrap4) have " << DiamondTrap4.getEnergy()
            << " Energy Points" << std::endl;
        DiamondTrap4.takeDamage(10);
        std::cout << DiamondTrap4.getName() << "(DiamondTrap4) have " << DiamondTrap4.getEnergy()
            << " Energy Points" << std::endl;
        DiamondTrap3.beRepaired(3);
        std::cout << DiamondTrap3.getName() << "(DiamondTrap3) have " << DiamondTrap3.getEnergy()
            << " Energy Points" << std::endl;
    }
    return 0;
}