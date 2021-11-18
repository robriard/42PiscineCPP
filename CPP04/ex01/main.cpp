/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:39:58 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 11:27:22 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "Dog.class.hpp"

#define ARR_SIZE 100

int main()
{
    Animal  *array[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        if (i % 2 == 0)
            array[i] = new Dog();
        else
            array[i] = new Cat();
        std::cout << array[i]->getType() << std::endl;
        std::cout << std::endl;       
    }
    for (int i = 0; i < ARR_SIZE; i++)
        delete array[i];
}