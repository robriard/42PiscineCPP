/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:39:58 by unknow            #+#    #+#             */
/*   Updated: 2021/11/16 15:57:34 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongCat.class.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << "My type is " <<  meta->getType() << std::endl;
        std::cout << "My type is " << j->getType() << std::endl;
        std::cout << "My type is " <<  i->getType() << std::endl;
    
        i->makeSound();
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }
    std::cout << std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();

        std::cout << "My type is " <<  meta->getType() << std::endl;
        std::cout << "My type is " <<  i->getType() << std::endl;
    
        i->makeSound();
        meta->makeSound();

        delete meta;
        delete i;
    }
}