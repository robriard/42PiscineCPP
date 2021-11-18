/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:21:23 by unknow            #+#    #+#             */
/*   Updated: 2021/11/16 14:23:04 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

#include <iostream>

class WrongAnimal{
public:

    WrongAnimal(void);
    WrongAnimal(WrongAnimal const & src);
    virtual ~WrongAnimal();

    WrongAnimal& operator=(WrongAnimal const & src);
    
    virtual std::string getType(void) const;
    virtual void        makeSound() const;

protected:
    std::string _type;
};

#endif