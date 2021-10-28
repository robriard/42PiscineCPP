/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:43:20 by robriard          #+#    #+#             */
/*   Updated: 2021/10/27 15:19:48 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
    Weapon Sword("medieval sword");
    Weapon Corn("simple ears of corn");

    std::cout << "sword is " << Sword.getType() << std::endl;
    std::cout << "corn is " << Corn.getType() << std::endl;


    HumanA Kevin("Kévin", Sword);
    HumanB Emmanuel("Emmanuel");
    std::cout << "Hello, my name is " << Kevin.getName() << std::endl;
    std::cout << "Hello, my name is " << Emmanuel.getName() << std::endl;

    Kevin.attack();
    Emmanuel.attack();

    Emmanuel.setWeapon(Sword);
    Kevin.takeWeapon(Corn);
    
    Kevin.attack();
    Emmanuel.attack();
}

// int main()
// {
//     {
//         Weapon club = Weapon("crude spiked club");
//         HumanA bob("Bob", club);
//         bob.attack();
//         club.setType("some other type of club");
//         bob.attack();
//     }
//     {
//         Weapon club = Weapon("crude spiked club");
//         HumanB jim("Jim");
//         jim.setWeapon(club);
//         jim.attack();
//         club.setType("some other type of club");
//         jim.attack();
//     }
// }