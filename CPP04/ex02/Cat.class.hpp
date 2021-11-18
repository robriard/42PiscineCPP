/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:26:47 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 12:22:35 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include "AAnimal.class.hpp"

class Cat : public AAnimal{
public:

    Cat();
    Cat(Cat const & src);
    virtual ~Cat();

    Cat& operator=(Cat const & rhs);

    virtual void            makeSound(void) const;

private:
    Brain*          _brain;
};

#endif