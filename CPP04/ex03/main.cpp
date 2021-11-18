/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:24:10 by unknow            #+#    #+#             */
/*   Updated: 2021/11/18 10:49:20 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"
#include "ICharacter.class.hpp"
#include "IMateriaSource.class.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    std::cout << std::endl;
    
    src->learnMateria(new Cure());
    std::cout << std::endl;

    src->learnMateria(new Ice());
    std::cout << std::endl;

    ICharacter* me = new Character("me");
    std::cout << std::endl;
    
    AMateria* tmp;
    std::cout << std::endl;
    
    tmp = src->createMateria("ice");
    std::cout << std::endl;
    
    me->equip(tmp);
    std::cout << std::endl;
    
    tmp = src->createMateria("cure");
    std::cout << std::endl;
    
    me->equip(tmp);
    std::cout << std::endl;
    
    ICharacter* bob = new Character("bob");
    std::cout << std::endl;
    
    me->use(0, *bob);
    std::cout << std::endl;
    
    me->use(1, *bob);
    std::cout << std::endl;
    
    delete bob;
    delete me;
    delete src;
    std::cout << std::endl;
    return 0;
}