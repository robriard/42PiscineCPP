/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:59:11 by unknow            #+#    #+#             */
/*   Updated: 2021/11/25 13:19:49 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>

class Animal{
public:

    Animal(void);
    Animal(Animal const & src);
    virtual ~Animal();

    Animal& operator=(Animal const & src);
    
    virtual std::string getType(void) const;
    virtual void        makeSound() const;

protected:
    Animal(std::string const & type);
    std::string _type;
};

#endif