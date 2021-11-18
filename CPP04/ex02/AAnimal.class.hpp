/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:59:11 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 12:18:23 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP

#include <iostream>
#include "Brain.class.hpp"

class AAnimal{
public:

    AAnimal(void);
    AAnimal(AAnimal const & src);
    virtual ~AAnimal();

    AAnimal& operator=(AAnimal const & src);
    
    virtual std::string getType(void) const;
    virtual void        makeSound() const = 0;

protected:
    std::string _type;
};

#endif