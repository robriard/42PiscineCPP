/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robriard <robriard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:53:21 by robriard          #+#    #+#             */
/*   Updated: 2021/10/26 12:55:05 by robriard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
public:

    Zombie();
    Zombie(std::string name);
    ~Zombie(void);
    
    void        setName(std::string name);
    void        announce(void) const;

private:
    std::string _name;
};
#endif