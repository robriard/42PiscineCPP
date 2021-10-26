/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:11:24 by robriard          #+#    #+#             */
/*   Updated: 2021/10/25 16:13:48 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main(void) {
    Zombie zombie = Zombie("boby");
    Zombie *zombie2 = newZombie("Dylan");
    randomChump("Kevin");
    delete zombie2;
    return 0;
}