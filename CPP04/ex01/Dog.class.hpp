/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:26:47 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 10:52:34 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include "Animal.class.hpp"

class Dog : public Animal{
public:

    Dog();
    Dog(Dog const & src);
    virtual ~Dog();

    Dog& operator=(Dog const & rhs);

    virtual void            makeSound(void) const;

private:
    Brain*          _brain;
};

#endif