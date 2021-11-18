/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unknow <unknow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:26:47 by unknow            #+#    #+#             */
/*   Updated: 2021/11/17 10:33:40 by unknow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal{
public:

    WrongCat();
    WrongCat(WrongCat const & src);
    virtual ~WrongCat();

    WrongCat& operator=(WrongCat const & rhs);

    virtual void            makeSound(void) const;

};

#endif